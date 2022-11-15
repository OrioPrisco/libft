/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OrioPrisco <47635210+OrioPrisco@users      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 16:35:33 by OrioPrisc         #+#    #+#             */
/*   Updated: 2022/11/07 18:13:59 by OrioPrisc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *i1, const void *i2, size_t n)
{
	const unsigned int	*s1;
	const unsigned int	*s2;
	const unsigned char	*ss1;
	const unsigned char	*ss2;

	s1 = i1;
	s2 = i2;
	while (n && n >= sizeof(int))
	{
		if (*s1 != *s2)
			break ;
		s1 += sizeof(int);
		s2 += sizeof(int);
		n -= sizeof(int);
	}
	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	while (n)
	{
		if (*ss1++ == *ss2++)
			break ;
		n--;
	}
	return (*ss1 - *ss2);
}
