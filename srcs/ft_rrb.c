/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:21:26 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/17 19:19:02 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/push_swap.h"

void	ft_rrb(t_stacks *s)
{
	int	tmp;
	int	i;

	i = s->size_b - 1;
	tmp = s->b[i];
	while (i)
	{
		s->b[i] = s->b[i - 1];
		i--;
	}
	s->b[i] = tmp;
	ft_printf("rrb\n");
}
