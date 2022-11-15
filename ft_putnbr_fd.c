/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OrioPrisco <47635210+OrioPrisco@users      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:08:35 by OrioPrisc         #+#    #+#             */
/*   Updated: 2022/11/08 15:09:34 by OrioPrisc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <libft.h>

//maybe allocate a small buffer, itoa into that, and putstr the buffer
void	ft_putnbr_fd(int nb, int fd)
{
	int	sign;

	sign = 1;
	if (nb < 0)
		sign = -1;
	if ((nb / (10 * sign)) > 0)
		ft_putnbr_fd(nb / 10, fd);
	else if (sign == -1)
		(void)(write(fd, "-", 1) + 1);
	(void)(write(fd, &"0123456789"[(nb % 10) * sign], 1) + 1);
}
