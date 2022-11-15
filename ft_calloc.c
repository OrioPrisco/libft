/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OrioPrisco <47635210+OrioPrisco@users      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:36:58 by OrioPrisc         #+#    #+#             */
/*   Updated: 2022/11/08 10:43:56 by OrioPrisc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

//TODO : check for size_t max
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*mem;

	total = 0;
	while (nmemb--)
	{
		total += size;
		if (total < size)
			return (0);
	}
	mem = malloc(total);
	if (!mem)
		return (0);
	ft_bzero(mem, total);
	return (mem);
}
