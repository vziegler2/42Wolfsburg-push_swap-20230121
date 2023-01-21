/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:21:53 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/21 10:41:14 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/push_swap.h"

void	ft_pa(t_stacks *s)
{
	int	i;

	s->size_a++;
	i = s->size_a;
	while (--i > 0)
		s->a[i] = s->a[i - 1];
	s->a[0] = s->b[0];
	i = -1;
	s->size_b--;
	while (++i < s->size_b)
		s->b[i] = s->b[i + 1];
	ft_printf("pa\n");
}

//Stapel A wird nach unten verschoben, Stapel B nach oben.