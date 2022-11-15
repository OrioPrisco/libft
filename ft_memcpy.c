/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OrioPrisco <47635210+OrioPrisco@users      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:13:24 by OrioPrisc         #+#    #+#             */
/*   Updated: 2022/11/07 17:03:08 by OrioPrisc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*source;
	unsigned char		*destin;

	if (dest == src)
		return (dest);
	source = src;
	destin = dest;
	while (n--)
		*destin++ = *source++;
	return (dest);
}
