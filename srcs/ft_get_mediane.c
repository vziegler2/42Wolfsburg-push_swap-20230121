/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_mediane.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:50:31 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/21 09:14:55 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/push_swap.h"

int	ft_get_mediane(int *pivot, int *stack, int int_count)
{
	int	*tmp_stack;
	int	i;

	tmp_stack = malloc(sizeof(int) * int_count);
	if (!tmp_stack)
		return (0);
	i = 0;
	while (i < int_count)
	{
		tmp_stack[i] = stack[i];
		i++;
	}
	ft_sort_tmp(tmp_stack, int_count);
	*pivot = tmp_stack[int_count / 2];
	free(tmp_stack);
	return (1);
}

//Kopiert, sortiert und setzt pivot gleich Stelle int_count / 2.