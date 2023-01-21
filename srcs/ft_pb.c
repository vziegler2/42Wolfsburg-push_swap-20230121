/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:53:31 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/21 09:40:13 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/push_swap.h"

void	ft_pb(t_stacks *s)
{
	int	i;

	s->size_b++;
	i = s->size_b;
	while (--i > 0)
		s->b[i] = s->b[i - 1];
	s->b[0] = s->a[0];
	i = -1;
	s->size_a--;
	while (++i < s->size_a)
		s->a[i] = s->a[i + 1];
	ft_printf("pb\n");
}

//Verschiebt die Variablen in b nach unten und fügt das neue Element oben an.
//Pusht die oberste Variable von a an die Spitze von b.
//Verschiebt die Variablen in a nach oben.