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

int			main(int argc, char **argv)
{
	t_block *stack_a;
	t_block *stack_b;
	unsigned int len;

	if (argc > 1)
	{
		if (ft_checking_numbers(argv))
		{
			stack_a = create_stack(argc, argv);
			stack_b = NULL;
			
			while (is_sorted(stack_a) == 0)
			{
				len = list_length(stack_a);
				loop_stack(&stack_a, &stack_b, len);
				// if (is_sorted(stack_a) == 1)
					// break ;
			}
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
