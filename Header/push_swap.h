/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:13:32 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/21 09:41:17 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../Header/libft.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stacks
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
}	t_stacks;

void	ft_push_swap(char **argv, t_stacks *stack);
int		ft_count_int(char **argv);
int		ft_ps_atoi(char *argv, t_stacks *stack);
void	ft_error(t_stacks *stack);
void	ft_check_repeat(t_stacks *stack, int int_count);
void	ft_sort(t_stacks *stack, int int_count);
void	ft_sort_tmp(int *tmp_stack, int int_count);
void	ft_sort_small_a(t_stacks *s, int int_count);
void	ft_sort_small_b(t_stacks *s, int int_count);
int		ft_check_sort(int *stack, int size, int order);
void	ft_sa(t_stacks *s);
void	ft_sb(t_stacks *s);
void	ft_sort_three_a(t_stacks *s);
void	ft_rra(t_stacks *s);
void	ft_rrb(t_stacks *s);
void	ft_ra(t_stacks *s);
void	ft_rb(t_stacks *s);
int		ft_get_mediane(int *pivot, int *stack, int int_count);
void	ft_sort_tmp(int *tmp_stack, int int_count);
void	ft_pa(t_stacks *s);
void	ft_pb(t_stacks *s);
int		ft_quicksort_a(t_stacks *stack, int int_count, int rev);
int		ft_quicksort_b(t_stacks *stack, int int_count, int rev);
int		ft_push(t_stacks *stack, int int_count, int buf);
int		ft_return(t_stacks *stack, int items);
int		ft_empty_b(t_stacks *stack, int int_count);

#endif
