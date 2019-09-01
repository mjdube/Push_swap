/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 09:21:10 by mdube             #+#    #+#             */
/*   Updated: 2019/08/24 15:10:33 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker/check.h"
#include "push_swap/push_swap.h"
#include "libft/libft.h"
#include <stdio.h>

int			main(int argc, char **argv)
{
	block *stack_a;
	block *stack_b;
	int small;
	int small1;
	int len;
	int div;
	int i;
	int num;

	if (argc > 1)
	{
		stack_a = create_stack(argc, argv);
		stack_b = NULL;

		while (is_sorted_a(stack_a) == 0)
		{
			loop_stack(&stack_a, &stack_b);
			if (is_sorted_a(stack_a) == 1)
				break ;
		}
	}
	/*while (stack_a)
	{
		if (is_sorted(stack_a) == 0)
		{
			if (compare(stack_a->data, stack_a->next->data) == 1)
			{
				if (i == 0)
				{
					swap_data(stack_a);
					ft_putstr("sa");
				}
			}
		}
		i++:
		stack_a = stack_a->next;
	}*/
	return (0);
}
