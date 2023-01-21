/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:38:55 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/21 11:01:27 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/push_swap.h"

int	ft_quicksort_a(t_stacks *stack, int int_count, int rev)
{
	int	pivot;
	int	items;

	pivot = 0;
	items = int_count;
	if (ft_check_sort(stack->a, int_count, 0) == 1)
		return (1);
	if (int_count <= 3)
	{
		ft_sort_small_a(stack, int_count);
		return (1);
	}
	if (!ft_get_mediane(&pivot, stack->a, int_count))
		return (0);
	while (int_count != items / 2 + items % 2)
	{
		if (stack->a[0] < pivot && int_count--)
			ft_pb(stack);
		else if (++rev)
			ft_ra(stack);
	}
	while (items / 2 + items % 2 != stack->size_a && rev--)
		ft_rra(stack);
	return (ft_return(stack, items));
}

//1. while-Loop:
//Durch Modulo in der Bedingung wird bei x,5-Ergebnissen die größere genommen.
//Die items-Bedingung hat die Stelle des Pivot-Wertes als Ergebnis.
//Wenn das oberste Element größer als Pivot ist, wird es ans Ende verschoben.
//Wenn das oberste Element kleiner als Pivot ist, wird es auf b verschoben.
//int_count verringert sich, falls das oberste Element auf b verschoben wird.
//ft_pb verringert stack->size_a und erhöht stack->size_b
//Die Rekursion geht erst mehrmals in ft_quicksort_a
//bis nur noch die höchsten Werte in A sind,
//danach wird ft_quicksort_b auf dem Rückweg mehrmals aufgerufen.
//rev entspricht am Ende der Anzahl der Elemente in A
//Pro Rekursionsebene wird int_count halbiert, auf dem Rückweg verdoppelt.
//2. while-Loop:
//Wenn nur ein Teil des Stapels bearbeitet wurde, werden alle Elemente,
//die mit ra nach unter verschoben wurden, wieder nach oben verschoben,
//damit sie im richtigen Cluster bleiben.
//Das kommt bspw. vor wenn aus Stapel B mehr als 3 Elemente zurückkommen.
//Z. 35 ++rev, weil man sonst nicht Bedingung erfüllt