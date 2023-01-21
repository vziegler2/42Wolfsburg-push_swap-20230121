/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:59:05 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/21 10:56:07 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/push_swap.h"

int	ft_push(t_stacks *stack, int int_count, int buf)
{
	if (buf == 0)
		ft_pb(stack);
	else
		ft_pa(stack);
	int_count--;
	return (int_count);
}

//Pusht und verringert zusätzlich int_count