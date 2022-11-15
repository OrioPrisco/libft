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

static const char	*ft_next_word(const char *str, const char *sep, int skip)
{
	if (!(*str))
		return (str);
	while (*str && ft_strchr(sep, *str))
		str++;
	while (skip && *str && !ft_strchr(sep, *str))
		str++;
	return (str);
}

static const char	*ft_split_one(char **tab, const char *str, const char *sep)
{
	int	size;

	if (ft_strchr(sep, *str))
		str = ft_next_word(str, sep, 0);
	size = ft_next_word(str, sep, 1) - str;
	*tab = malloc(size + 1);
	if (!(*tab))
		return (0);
	while (*str && !ft_strchr(sep, *str))
		*(*tab)++ = *str++;
	**tab = '\0';
	*tab -= size;
	return (str);
}

static char	**free_all(char **tab, int size)
{
	while (tab && size)
		free(tab[--size]);
	free(tab);
	return (0);
}

char	**ft_split(const char *src, const char *charset)
{
	const char	*str;
	char		**tab;
	int			i;
	int			size;

	str = src;
	size = 0;
	while (*ft_next_word(str, charset, 0))
	{
		str = ft_next_word(str, charset, 1);
		size++;
	}
	tab = malloc((size + 1) * sizeof(char *));
	if (!tab)
		return (0);
	i = 0;
	while (i < size)
	{
		src = ft_split_one(tab + i++, src, charset);
		if (!src)
			return (free_all(tab, i));
	}
	tab[i] = 0;
	return (tab);
}
