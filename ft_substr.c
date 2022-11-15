/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OrioPrisco <47635210+OrioPrisco@users      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:57:12 by OrioPrisc         #+#    #+#             */
/*   Updated: 2022/11/08 12:55:33 by OrioPrisc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//possible optimization : strnstr(s, 0, start + len);
//use strcpy instead of strlcpy
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	lens;

	lens = ft_strlen(s);
	if (start > lens)
		return (ft_strdup(""));
	lens = lens - start;
	if (lens > len)
		lens = len;
	str = malloc(lens + 1);
	if (!str)
		return (0);
	ft_strlcpy(str, s + start, lens + 1);
	return (str);
}
