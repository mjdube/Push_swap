/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 09:21:10 by mdube             #+#    #+#             */
/*   Updated: 2019/08/17 18:05:56 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/checker/check.h"
#include "/push_swap/push_swap.h"

int			main(int argc, char **argv)
{
	block *stack_a;
	block *stack_b;
	int i;

	stack_a = create_stack(argc, argv);
	stack_b = NULL;
	i = 0;
	while (stack_a)
	{
		if (is_sorted(stack_a) == 0)
		{
			if (compare(stack_a->data, stack_a->next->data) == 1)
			{
				if (i == 0)
					swap_data(stack_a);

			}

		}
		i++:
		stack_a = stack_a->next;
	}
	return (0);
}
