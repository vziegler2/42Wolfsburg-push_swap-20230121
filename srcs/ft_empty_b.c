/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_empty_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:20:47 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/17 21:53:20 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/push_swap.h"

int	ft_empty_b(t_stacks *stack, int int_count)
{
	while (int_count--)
		ft_pa(stack);
	return (1);
}

//Reine Auslagerfunktion, um die 25 Zeilen pro Funktion einzuhalten.