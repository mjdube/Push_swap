/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 09:21:10 by mdube             #+#    #+#             */
/*   Updated: 2019/09/15 15:06:26 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/push_swap.h"

void				push_swap(t_block **stack_a, t_block **stack_b);
void				sorted_stacks(t_block **stack_a, t_block **stack_b);

int					main(int argc, char **argv)
{
	t_block			*stack_a;
	t_block			*stack_b;

	stack_b = NULL;
	if (argc >= 2)
	{
		if (argc > 2)
		{
			if (ft_checking_numbers(argv + 1) == 0)
				return (0);
			else 
				stack_a = create_stack(argv + 1);
		}
		else 	
		{
			argv = ft_strsplit(argv[1], ' ');
			if (ft_checking_numbers(argv) == 0)
			{
				ft_delarray(argv);
				return (0);
			}
			stack_a = create_stack(argv);
		}
		push_swap(&stack_a, &stack_b);
		// ft_delarray(argv);
	}
	return (0);
}

void				push_swap(t_block **stack_a, t_block **stack_b)
{
	unsigned int	len_stack;

	len_stack = list_length(*stack_a);
	if (100 <= len_stack && len_stack <= 250)
		sort_100(&(*stack_a), &(*stack_b));
	else if (251 <= len_stack && len_stack <= 500)
		sort_500(&(*stack_a), &(*stack_b));
	else 
	{
		while (is_sorted(*stack_a) > 0)
			loop_stack_1(&(*stack_a), &(*stack_b));
		while (*stack_b != NULL)
			sorted_stacks(&(*stack_a), &(*stack_b));
	}
}

void				sorted_stacks(t_block **stack_a, t_block **stack_b)
{
	int			big;

	big = big_number(*stack_b);
	if (is_sorted_b(*stack_b) == 0)
	{
		if ((*stack_b)->data == big)
		{
			push(&(*stack_b), &(*stack_a));
			ft_putendl("pa");
		}
		if (is_sorted(*stack_a) == 1)
		{
			swap_data(&(*stack_a));
			ft_putendl("sa");
		}
	}
	if (is_sorted_b(*stack_b) > 0)
	{
		if (is_sorted_b(*stack_b) >= 2 && (*stack_b)->data == big)
			rb_sb_rrb(&(*stack_b));
	}
}