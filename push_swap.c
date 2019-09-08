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

#include "push_swap/push_swap.h"
#include <stdio.h>

int			main(int argc, char **argv)
{
	t_block *stack_a;
	t_block *stack_b;
	t_block *lst;

	if (argc > 1)
	{
		stack_a = create_stack(argc, argv);
		stack_b = NULL;
		while (is_sorted(stack_a) == 0)
		{
			loop_stack(&stack_a, &stack_b);
			if (is_sorted(stack_a) == 1)
				break ;
		}
		while (stack_b != NULL)
		{
			push(&stack_b, &stack_a);
			ft_putendl("pa");
		}
		while (stack_a->next != NULL)
		{
			printf("%d ",stack_a->data);
			stack_a = stack_a->next;
		}
		printf("%d ",stack_a->data);
	}

	return (0);
}
