/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OrioPrisco <47635210+OrioPrisco@users      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 09:52:34 by OrioPrisc         #+#    #+#             */
/*   Updated: 2022/11/07 17:26:08 by OrioPrisc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	ret;

	i = ft_strnlen(dest, size);
	if (size <= i)
		return (size + ft_strlen(src));
	ret = ft_strncpy(dest + i, src, size - i - 1);
	dest[i] = '\0';
	return (ret + 1);
}
