/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod.c                                          :+:      :+:    :+:   */
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

_Bool	ft_atold(const char *str, long double *res)
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
	if (*str)
		return (1);
	return (*res = result * sign, 0);
}

_Bool	ft_atod(const char *str, double *res)
{
	long double	ld;

	if (ft_atold(str, &ld))
	{
		*res = ld;
		return (1);
	}
	*res = ld;
	return (0);
}
