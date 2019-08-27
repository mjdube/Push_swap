/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 17:17:12 by mdube             #+#    #+#             */
/*   Updated: 2019/08/24 15:10:13 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int				checking_numbers(char **str)
{
	int			i;
	int			j;

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

int				main(int argc, char **argv)
{
	int			accept;
	char		*line;
	block		*stack_a;
	block		*stack_b;
	
	if (argc > 1)
	{
		stack_b = NULL;
		if (checking_numbers(argv) == 1)
		{
			stack_a = create_stack(argc, argv);
			stack_a = create_stack_a(stack_a);
			while (get_next_line(0, &line) > 0)
			{
				accept = is_verify(line);
				if (accept == 1 || accept == 4 || accept == 7)
				{
					
					ft_instr(&stack_a, accept);
					//ft_putstr("hi!!!!!!");
				}
				if (accept == 2 || accept == 5 || accept == 8)
					ft_instr(&stack_b, accept);
				if (accept == 3 || accept == 6 || accept == 9)
					ft_instr_both(&stack_a, &stack_b, accept);
				if (accept == 10)
					push(&stack_b, &stack_a);
				if (accept == 11)
					push(&stack_a, &stack_b);
				//reading_instr(&stack_a, &stack_b, is_verify(line));
				if (ft_strcmp("done", (const char*)line) == 0 || ft_strcmp("DONE", (const char*)line) == 0)
				{
					ft_putstr(line);
					break ;
				}
			}
			/*while (get_next_line(0, &line) == 1)
			{
				if (ft_strequ("ra", (const char*)line))
				{
					ft_putstr("hi!!!!!!");
					ft_instr(&stack_a, accept);
					//ft_putstr("hi!!!!!!");
				}
				else if (ft_strequ("sb", (const char*)line))
					ft_instr(&stack_b, is_verify(line));
				else if (ft_strequ("rrr", (const char*)line))
					ft_instr_both(&stack_a, &stack_b, is_verify(line));
				else if (ft_strequ("pa", (const char*)line))
				{
					push(&stack_b, &stack_a);
					//number = pop_number(stack_b);
					//stack_a = push_to_stack(number, stack_a);
					//stack_b = push_list(stack_b);
				}
				else if (ft_strequ("pb", (const char*)line))
				{
					push(&stack_a, &stack_b);
					//number = pop_number(stack_a);
					//stack_b = push_to_stack(number, stack_b);
					//stack_a = push_list(stack_a);
				}
				if (ft_strcmp("done", (const char*)line) || ft_strcmp("DONE", (const char*)line))
				{
					break ;
				}
			}*/
		}
		else
		{
			ft_putstr("ERROR\n");
			return (0);
		}
		(list_length(stack_b) > 0) ? ft_putstr("KO\n") : ft_putstr("OK\n");
	}
	return (0);
}
