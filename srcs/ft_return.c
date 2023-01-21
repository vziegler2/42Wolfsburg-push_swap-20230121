/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_return.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:26:56 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/17 13:32:37 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/push_swap.h"

int	ft_return(t_stacks *stack, int items)
{
	if (ft_quicksort_a(stack, items / 2 + items % 2, 0))
	{
		if (ft_quicksort_b(stack, items / 2, 0))
		{
			return (1);
		}
	}
	return (0);
}

// Die und-Bedingung wäre für norminette zu lang als return-Wert.