/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_non_space.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OrioPrisco <47635210+OrioPrisco@users      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:53:17 by OrioPrisc         #+#    #+#             */
/*   Updated: 2023/04/04 14:53:24 by OrioPrisc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_next_non_space(const char *str)
{
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	return (str);
}