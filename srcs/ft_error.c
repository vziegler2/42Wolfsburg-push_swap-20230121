/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 20:23:13 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/20 19:10:47 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/push_swap.h"

void	ft_error(t_stacks *stack)
{
	free(stack->a);
	free(stack->b);
	free(stack);
	write(2, "Error\n", 6);
	exit(1);
}

//exit beendet das Programm und gibt den Wert 1 an das Betriebssystem zurück.
//Der Rückgabewert != 0 zeigt an, dass ein Fehler vorliegt.