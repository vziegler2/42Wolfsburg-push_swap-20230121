/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:00:37 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/21 09:28:22 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/push_swap.h"

void	ft_sort_three_a(t_stacks *s)
{
	if (s->a[0] > s->a[1] && s->a[0] < s->a[2])
		ft_sa(s);
	else if (s->a[0] > s->a[1] && s->a[0] > s->a[2] && s->a[1] > s->a[2])
	{
		ft_sa(s);
		ft_rra(s);
	}
	else if (s->a[0] > s->a[1] && s->a[0] > s->a[2] && s->a[1] < s->a[2])
		ft_ra(s);
	else if (s->a[0] < s->a[1] && s->a[0] < s->a[2])
	{
		ft_sa(s);
		ft_ra(s);
	}
	else
		ft_rra(s);
}
