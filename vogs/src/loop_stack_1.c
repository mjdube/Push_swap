/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop_stack_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 11:11:40 by mdube             #+#    #+#             */
/*   Updated: 2019/09/13 11:11:43 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void				loop_stack_1(t_block **stack_a, t_block **stack_b)
{
	unsigned int	len_a;
	unsigned int	len_b;

	len_a = list_length((*stack_a));
	len_b = list_length((*stack_b));
	if (len_a == 0)
		return ;
	if (len_a <= 3)
		three_nums(&(*stack_a));
	else if (is_sorted((*stack_a)) == 1 && len_a > 3)
	{
		swap_data(&(*stack_a));
		ft_putendl("sa");
	}
	else if (is_sorted((*stack_a)) > 1 && len_a > 3)
	{
		push(&(*stack_a), &(*stack_b));
		ft_putendl("pb");
	}
	if (len_b > 0)
		loop_stack_2(&(*stack_a), &(*stack_b));
}
