/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_nums.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 12:08:28 by mdube             #+#    #+#             */
/*   Updated: 2019/09/09 10:05:39 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		three_nums(t_block **stack_a)
{
	while (is_sorted(*stack_a) > 0)
	{
		if ((*stack_a) && (*stack_a)->next && (*stack_a)->next->next)
		{
			if ((*stack_a)->data > (*stack_a)->next->data &&
					(*stack_a)->next->data < (*stack_a)->next->next->data)
			{
				swap_data(*(&stack_a));
				ft_putendl("sa");
			}
			if ((*stack_a)->data < (*stack_a)->next->data &&
					(*stack_a)->next->data > (*stack_a)->next->next->data)
			{
				rotate_reverse(*(&stack_a));
				ft_putendl("rra");
			}
			if ((*stack_a)->data > (*stack_a)->next->data &&
					(*stack_a)->next->data > (*stack_a)->next->next->data)
			{
				rotate_reverse(*(&stack_a));
				ft_putendl("rra");
			}
		}
	}
}
