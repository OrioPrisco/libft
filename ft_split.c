/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OrioPrisco <47635210+OrioPrisco@users      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 09:12:33 by OrioPrisc         #+#    #+#             */
/*   Updated: 2022/11/08 14:11:19 by OrioPrisc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static char	**free_all(char **tab, int size)
{
	while (tab && size)
		free(tab[--size]);
	free(tab);
	return (0);
}

static size_t	count_words(const char *str, char c)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str && *str != c)
			count++;
		while (*str && *str != c)
			str++;
	}
	return (count);
}

static	const char	*ft_split_one(char **ptr, const char *str, char c)
{
	const char	*next;
	size_t		len;

	while (*str && *str == c)
		str++;
	next = ft_strchr(str, c);
	if (next)
		len = next - str + 1;
	else
	{
		len = ft_strlen(str) + 1;
		next = str + len - 1;
	}
	*ptr = malloc(len);
	if (!ptr)
		return (0);
	ft_strlcpy(*ptr, str, len);
	return (next);
}

char	**ft_split(const char *str, char c)
{
	char	**tab;
	size_t	words;
	size_t	i;

	words = count_words(str, c);
	tab = malloc(sizeof(*tab) * (words + 1));
	if (!tab)
		return (0);
	i = 0;
	ft_bzero(tab, sizeof(*tab) * (words + 1));
	while (i < words)
	{
		str = ft_split_one(tab + i, str, c);
		if (!str)
			return (free_all(tab, i));
		i++;
	}
	return (tab);
}
