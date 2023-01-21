/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:16:23 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/21 11:01:13 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/push_swap.h"

int	ft_quicksort_b(t_stacks *stack, int int_count, int rev)
{
	int	pivot;
	int	items;

	pivot = 0;
	items = int_count;
	if (ft_check_sort(stack->b, int_count, 1) == 1)
		return (ft_empty_b(stack, int_count));
	if (int_count <= 3)
	{
		ft_sort_small_b(stack, int_count);
		return (1);
	}
	if (!ft_get_mediane(&pivot, stack->b, int_count))
		return (0);
	while (int_count != items / 2)
	{
		if (stack->b[0] >= pivot && int_count--)
			ft_pa(stack);
		else if (++rev)
			ft_rb(stack);
	}
	while (items / 2 != stack->size_b && rev--)
		ft_rrb(stack);
	return (ft_return(stack, items));
}

//Die in der vorherigen Rekursion übergebene Anzahl / 2 entspricht int_count.
//Bei ungeraden Zahlen wird abgerundet.
//Z. 35 ++rev, weil man sonst nicht Bedingung erfüllt