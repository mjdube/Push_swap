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
	int				small;
	unsigned int	split;
	int				len;

	small = small_number((*stack_a));
	len = list_length((*stack_a));
	if (len == 0)
		return ;
	if (len <= 3)
		three_nums(&(*stack_a));
	else if (compare((*stack_a)->data, (*stack_a)->next->data))
	{
		swap_data(*(&stack_a));
		ft_putendl("sa");
	}
	else if ((*stack_a)->data != small)
	{
		split = (unsigned int)len / 2;
		more_nums(&(*stack_a), small, split);
	}
	else if ((*stack_a)->data == small && is_sorted(*stack_a) == 0)
	{
		push(*(&stack_a), *(&stack_b));
		ft_putendl("pb");
	}
}
