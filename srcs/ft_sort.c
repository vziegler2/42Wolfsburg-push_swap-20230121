/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:35:37 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/20 21:46:46 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/push_swap.h"

void	ft_sort(t_stacks *stack, int int_count)
{
	if (ft_check_sort(stack->a, stack->size_a, 0) == 0)
	{
		if (int_count == 2)
			ft_sa(stack);
		else if (int_count == 3)
			ft_sort_three_a(stack);
		else
			ft_quicksort_a(stack, int_count, 0);
	}
}
