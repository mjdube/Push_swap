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
	unsigned int len;
	int range;
	int diff;
    int small;
    int big;

	diff = big - small;
	if (argc > 1)
	{
		if (ft_checking_numbers(argv))
		{
			
			stack_a = create_stack(argc, argv);
			stack_b = NULL;
			small = small_number(stack_a);
			big = big_number(stack_a);
			diff = big - small;
			range = diff / 5;
			len = list_length(stack_a);
			if (len > 100)
			{
				while (stack_a != NULL)
				{
					len = list_length(stack_a);
					// ft_putnbr(len);
					loop_stack(&stack_a, &stack_b, len, range);
				}
				while (stack_b != NULL)
				{
					printf("%d ",stack_b->data);
					stack_b = stack_b->next;
				}
				// while (stack_b != NULL)
				// {
					// push(&stack_b, &stack_a);
					// ft_putendl("pa");
				// }
				// while (stack_a != NULL)
				// {
					// printf("%d ",stack_a->data);
					// stack_a = stack_a->next;
				// }
				// while (stack_a != NULL)
				// {
					// printf("%d ",stack_a->data);
					// stack_a = stack_a->next;
				// }
							
			}
				// if (is_sorted(stack_a) == 1)
					// break ;
			// }
			/*while (stack_b != NULL)
			{
				push(&stack_b, &stack_a);
				ft_putendl("pa");
			}
			while (stack_a->next != NULL)
			{
				printf("%d ",stack_a->data);
				stack_a = stack_a->next;
			}
			printf("%d ",stack_a->data);*/
		}
		else
			ft_putendl("ERROR");	
	}
	return (0);
}
