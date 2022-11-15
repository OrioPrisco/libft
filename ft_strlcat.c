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

	i = 0;
	while (dest[i] && i < size)
		i++;
	if (size <= i)
		return (size + ft_strlen(src));
	ret = ft_strlen(src) + i;
	while ((i < size - 1) && *src)
	{
		dest[i] = *src++;
		i++;
	}
	dest[i] = '\0';
	return (ret);
}
