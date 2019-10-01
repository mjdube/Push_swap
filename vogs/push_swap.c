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

	if (argc > 1)
	{
		if (argc == 2)
			argv = ft_strsplit(argv[1], ' ');
		if (ft_checking_numbers(argv))
		{
			stack_a = create_stack(argc, argv);
			stack_b = NULL;
			if (dup_nums(stack_a) == int_max(stack_a))
			{
				while (is_sorted(stack_a) > 0)
					loop_stack_1(&stack_a, &stack_b);
			}
			else
			{
				ft_putendl("ERROR");
			}
		}
		else
			ft_putendl("ERROR");
	}
	return (0);
}

void				push_swap(t_block **stack_a, t_block **stack_b)
{
	int				big;
	unsigned int	len;

	len = list_length(*stack_a);
	big = big_number(*stack_b);
	if (is_sorted(*stack_a) > 0 && len <= 3)
		loop_stack_1(&(*stack_a), &(*stack_b));
	else if (is_sorted(*stack_a) == 0 && is_sorted_b(*stack_b) > 0)
	{
		if (is_sorted_b(*stack_b) == 1)
		{
			swap_data(&(*stack_b));
			ft_putendl("sb");
		}
		else if ((*stack_b)->data == big)
		{
			push(&(*stack_b), &(*stack_a));
			ft_putendl("pa");
		}
	}
	else if (is_sorted(*stack_a) == 0 && stack_b == NULL)
		return ;
}

void				sorted_stacks(t_block **stack_a, t_block **stack_b)
{
	if (is_sorted(*stack_a) == 0 && is_sorted_b(*stack_b) == 0)
	{
		push(&(*stack_b), &(*stack_a));
		ft_putendl("pa");
		while (is_sorted(*stack_a) > 0)
			push_swap(&(*stack_a), &(*stack_b));
	}
}