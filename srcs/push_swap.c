/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:31:55 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/21 09:03:50 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/push_swap.h"

void	ft_push_swap(char **argv, t_stacks *stack)
{
	int			int_count;
	int			i;

	i = -1;
	int_count = ft_count_int(argv);
	stack->a = malloc(sizeof(int) * int_count);
	if (!stack->a)
		return ;
	stack->size_a = int_count;
	stack->b = malloc(sizeof(int) * int_count);
	if (!stack->b)
	{
		free(stack->a);
		return ;
	}
	stack->size_b = 0;
	while (++i < int_count)
		stack->a[i] = ft_ps_atoi(argv[i], stack);
	ft_check_repeat(stack, int_count);
	ft_sort(stack, int_count);
	free(stack->a);
	free(stack->b);
}

int	main(int argc, char **argv)
{
	t_stacks	*stack;

	stack = malloc(sizeof(t_stacks));
	if (!stack)
		return (0);
	if (argc >= 2)
	{
		argv++;
		if (argc == 2)
			argv = ft_split(*argv, ' ');
		ft_push_swap(argv, stack);
	}
	free(stack);
	return (0);
}
