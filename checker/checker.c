/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 17:17:12 by mdube             #+#    #+#             */
/*   Updated: 2019/08/03 11:44:45 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		checking_numbers(char **str)
{
	int i;
	int j;

	i = 1;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (ft_isalpha(str[i][j]) == 1)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		int a;
		int b;
		block *thestack;
		block *stack_a;
		block *stack_b;
	//	char *line;
	//	int len;
		
		stack_a = NULL;
		stack_b = NULL;
		thestack = NULL;
	/*
		if (checking_numbers(argv) == 1)
		{
			thestack = create_stack(argc, argv);
			while (get_next_line(0, &line) == 1)
			{
				if (stack_a == NULL && stack_b == NULL)
					stack_a = create_stack_a(thestack);
				else if (ft_strequ("sa", (const char*)line))
					swap_data(stack_a);
				else if (ft_strequ("sb", (const char*)line))
					swap_data(stack_b);
				else if (ft_strequ("ss", (const char*)line))
				{
					swap_data(stack_a);
					swap_data(stack_b);
				}
				else if (ft_strequ("ra", (const char*)line))
					rotate_normal(stack_a);
				else if (ft_strequ("rb", (const char*)line))
					rotate_normal(stack_b);
				else if (ft_strequ("rr", (const char*)line))
				{
					rotate_normal(stack_a);
					rotate_normal(stack_b);
				}
				else if (ft_strequ("rra", (const char*)line))
					rotate_reverse(stack_a);
				else if (ft_strequ("rrb", (const char*)line))
					rotate_reverse(stack_b);
				//else if (ft_strequ("pa", (const char*)line))
			}
		}
		else
		{
			ft_putstr("ERROR\n");
			return (0);
		}
		len = list_length(stack_b);
		if (len > 0)
			ft_putstr("KO");
		else
			ft_putstr("OK");
	 */
		thestack = create_stack(argc, argv);
		stack_a = create_stack_a(thestack);

		b = pop_number(stack_a);
		stack_b = push_to_stack(b, stack_b);
		stack_a = push_list(stack_a);
		
		b = pop_number(stack_a);
		stack_b = push_to_stack(b, stack_b);
		stack_a = push_list(stack_a);

		b = pop_number(stack_a);
		stack_b = push_to_stack(b, stack_b);
		stack_a = push_list(stack_a);

		swap_data(stack_a);
		swap_data(stack_b);
		while (thestack)
		{
			printf("%i\n", thestack->data);
			thestack = thestack->next;
		}
		printf("\n");
		while (stack_a)
		{
			printf("%i\n", stack_a->data);
			stack_a = stack_a->next;
		}
		printf("\n");
		while (stack_b)
		{
			printf("%i\n", stack_b->data);
			stack_b = stack_b->next;
		}
	}

	return (0);
}
