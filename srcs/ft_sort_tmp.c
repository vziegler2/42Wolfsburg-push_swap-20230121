/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_tmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:55:22 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/21 10:36:06 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_tmp(int *tmp_stack, int int_count)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < int_count)
	{
		j = i + 1;
		while (j < int_count)
		{
			if (tmp_stack[i] > tmp_stack[j])
			{
				tmp = tmp_stack[i];
				tmp_stack[i] = tmp_stack[j];
				tmp_stack[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
