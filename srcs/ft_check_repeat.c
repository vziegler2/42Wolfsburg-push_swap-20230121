/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_repeat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:31:54 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/21 10:36:38 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/push_swap.h"

void	ft_check_repeat(t_stacks *stack, int int_count)
{
	int	i;
	int	j;

	i = 0;
	while (i < int_count)
	{
		j = i + 1;
		while (j < int_count)
		{
			if (stack->a[i] == stack->a[j])
				ft_error(stack);
			j++;
		}
		i++;
	}
}
