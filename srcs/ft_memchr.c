/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OrioPrisco <47635210+OrioPrisco@users      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:41:35 by OrioPrisc         #+#    #+#             */
/*   Updated: 2022/11/07 18:01:55 by OrioPrisc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, unsigned char c, size_t n)
{
	const unsigned char	*addr;

	addr = (void *)s;
	while (n--)
	{
		if (*addr++ == c)
			return ((void *)(addr - 1));
	}
	return (0);
}
