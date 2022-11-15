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

#include <libft.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!*big && !*little)
		return ((char *)big);
	while (*big && len)
	{
		i = 0;
		while (big[i] && little[i] && len - i)
		{
			if (big[i] != little[i])
				break ;
			i++;
		}
		if (!little[i])
			return ((char *)big);
		big++;
		len--;
	}
	return (0);
}
