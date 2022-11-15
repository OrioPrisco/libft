/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OrioPrisco <47635210+OrioPrisco@users      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:41:32 by OrioPrisc         #+#    #+#             */
/*   Updated: 2022/11/07 18:21:47 by OrioPrisc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//TODO : advance big by number of matched characters
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	lil_len;

	if (!*little)
		return ((char *)big);
	lil_len = ft_strlen(little);
	if (lil_len > len)
		return (0);
	while (*big && len - (lil_len - 1))
	{
		if (!ft_memcmp(big, little, lil_len))
			return ((char *)big);
		big++;
		len--;
	}
	return (0);
}
