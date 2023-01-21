/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_small_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 22:53:59 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/21 10:26:02 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/push_swap.h"

void	ft_sort_small_a(t_stacks *s, int int_count)
{
	if (int_count == 3 && s->size_a == 3)
		ft_sort_three_a(s);
	else if (int_count == 2)
	{
		if (s->a[0] > s->a[1])
			ft_sa(s);
	}
	else
	{
		while (int_count != 3 || !(s->a[0] < s->a[1] && s->a[1] < s->a[2]))
		{
			if (int_count == 3)
			{
				if (s->a[0] > s->a[1])
					ft_sa(s);
				else
					int_count = ft_push(s, int_count, 0);
			}
			else if (s->a[0] > s->a[1])
				ft_sa(s);
			else if (int_count++)
				ft_pa(s);
		}
	}
}

//Z. 26 ist eine spezielle Bedingung, falls nur die obersten drei Elemente
//Z. 26 des insgesamt größeren Stack A bearbeitet werden.