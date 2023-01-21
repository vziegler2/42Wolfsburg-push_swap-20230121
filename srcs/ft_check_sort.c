/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:40:14 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/20 21:55:43 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/push_swap.h"

int	ft_check_sort(int *stack, int int_count, int direction)
{
	int	i;

	i = 1;
	if (int_count == 1)
		return (1);
	else if (direction == 0)
	{
		while (i < int_count)
		{
			if ((stack[i - 1]) > stack[i])
				return (0);
			i++;
		}
		return (1);
	}
	else
	{
		while (i < int_count)
		{
			if (stack[i - 1] < stack[i])
				return (0);
			i++;
		}
		return (1);
	}
}

//Prüft ob alle Zahlen auf dem übergebenen Stack
//aufsteigend (if) oder absteigend (else) sortiert sind.
//Übergibt dann 0.
//direction == 0 heißt es wird nach aufsteigender Ordnung gesucht,
//ansonsten nach absteigender Reihenfolge.