/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OrioPrisco <47635210+OrioPrisco@users      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:15:53 by OrioPrisc         #+#    #+#             */
/*   Updated: 2022/11/08 15:41:33 by OrioPrisc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **begin_list, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*begin_list);
	if (last)
		last->next = new;
	else
		*begin_list = new;
}
