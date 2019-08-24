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
	int			number;
	char		*line;
	block		*stack_a;
	block		*stack_b;
	
	if (argc > 1)
	{
		stack_a = NULL;
		stack_b = NULL;
		if (checking_numbers(argv) == 1)
		{
			stack_a = create_stack(argc, argv);
			while (get_next_line(0, &line))
			{
				reading_instr(&stack_a, &stack_b, is_verify(line));
				if (ft_strcmp("done", (const char*)line) || ft_strcmp("DONE", (const char*)line))
					break ;
			}
			/*while (get_next_line(0, &line) == 1)
			{
				if (is_verify(line))
					ft_instr(stack_a, is_verify(line));
				else if ()
					ft_instr(stack_b, is_verify(line));
				else if ()
					ft_instr_both(stack_a, stack_b, is_verify(line));
				else if (ft_strequ("pa", (const char*)line))
				{
					number = pop_number(stack_b);
					stack_a = push_to_stack(number, stack_a);
					stack_b = push_list(stack_b);
				}
				else if (ft_strequ("pb", (const char*)line))
				{
					number = pop_number(stack_a);
					stack_b = push_to_stack(number, stack_b);
					stack_a = push_list(stack_a);
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
