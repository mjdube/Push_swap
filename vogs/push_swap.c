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

void				push_swap(t_block **stack_a, t_block **stack_b, unsigned int len)
{
	int				small;
	int				big;
	int				diff;
	int				range;

	small = small_number((*stack_a));
	big = big_number((*stack_a));
	diff = big - small;
	range = diff / 5;
	if (len <= 99)
		loop_stack_1(&(*stack_a), &(*stack_b));
	else if (len >= 100)
		loop_stack_2(&(*stack_a), &(*stack_b), len, range);
}


int					main(int argc, char **argv)
{
	t_block			*stack_a;
	t_block			*stack_b;
	unsigned int	len;

	if (argc > 1)
	{
		if (ft_checking_numbers(argv))
		{
			stack_a = create_stack(argc, argv);
			stack_b = NULL;
			if (dup_nums(stack_a) == int_max(stack_a))
			{
				len = list_length(stack_a);
				while (stack_a != NULL)
				{
					push_swap(&stack_a, &stack_b, len);
					if (is_sorted(stack_a) == 1)
						break ;
				}
				//while (stack_b != NULL)
				//{
				//	push(&stack_b, &stack_a);
				//	ft_putendl("pa");
				//}
			}
			else
			{
				ft_putendl("ERROR");
				exit(0);
			}
		}
		else
			ft_putendl("ERROR");
	}
	return (0);
}
