/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_small_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:33:47 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/21 10:55:05 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/push_swap.h"

void	ft_sort_small_b(t_stacks *s, int int_count)
{
	if (int_count == 2)
	{
		if (s->b[0] < s->b[1])
			ft_sb(s);
		while (int_count--)
			ft_pa(s);
	}
	else
	{
		while (int_count || !(s->a[0] < s->a[1] && s->a[1] < s->a[2]))
		{
			if (int_count == 1 && s->a[0] > s->a[1])
				ft_sa(s);
			else if (int_count == 1 || (s->b[0] > s->b[1]))
				int_count = ft_push(s, int_count, 1);
			else if (int_count == 3 && s->b[0] > s->b[2])
				int_count = ft_push(s, int_count, 1);
			else
				ft_sb(s);
		}
	}
}

//ft_push dekrementiert im Gegensatz zu ft_pa/pb int_count um 1
//Die zwei else if, weil die oder-Bedingung zu lang für Norminette wäre.
//Z. 30/32 Pusht alles auf a was nicht das kleinste Element ist,
//Z. 28 sortiert dann die zwei auf a
//Z. 30 und pusht das letzte Element.
//ft_sort_three_a geht hier nicht, da andersrum sortiert werden muss.
//und kein rb/rrb verwendet werden darf.