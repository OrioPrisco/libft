/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtold.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OrioPrisco <47635210+OrioPrisco@users      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:58:30 by OrioPrisc         #+#    #+#             */
/*   Updated: 2023/01/10 16:34:50 by OrioPrisc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static double	get_multiplier(const char *str)
{
	double	res;

	res = 1;
	if (*str && *str == '.')
		return (0.1);
	str++;
	while (*str && *str >= '0' && *str <= '9')
	{
		res *= 10;
	}
	return (res);
}

long double	ft_strtold(const char *str, char **endptr)
{
	int		sign;
	double	result;
	double	multiplier;

	result = 0;
	sign = 1;
	str = ft_next_non_space(str);
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1;
	multiplier = get_multiplier(str);
	while ((*str >= '0' && *str <= '9') || *str == '.')
	{
		if (*str != '.')
		{
			result += (*str - '0') * multiplier;
			multiplier /= 10;
		}
		str++;
	}
	if (endptr)
		*endptr = (char *)str;
	return (result * sign);
}
