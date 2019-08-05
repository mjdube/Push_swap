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

int		isValid(char *str)
{
	if (ft_strcmp((const char *)str, "sa") == 1)
		return (1);
	else if (ft_strcmp((const char *)str, "sb") == 1)
		return (1);
	else if (ft_strcmp((const char *)str, "ss") == 1)
		return (1);
	else if (ft_strcmp((const char *)str, "pa") == 1)
		return (1);
	else if (ft_strcmp((const char *)str, "pb") == 1)
		return (1);
	else if (ft_strcmp((const char *)str, "ra") == 1)
		return (1);
	else if (ft_strcmp((const char *)str, "rb") == 1)
		return (1);
	else if (ft_strcmp((const char *)str, "rr") == 1)
		return (1);
	else if (ft_strcmp((const char *)str, "rra") == 1)
		return (1);
	else if (ft_strcmp((const char *)str, "rrb") == 1)
		return (1);
	else if (ft_strcmp((const char *)str, "rrr") == 1)
		return (1);
	else
		return (0);
}

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

int		main(int argc, char *argv[])
{
	if (argc > 1)
	{
		block *thestack;
		block *stack_a;
		block *stack_b;

		stack_a = NULL;
		stack_b = NULL;
		if (checking_numbers(argv) == 1)
		{
			thestack = create_stack(argc, argv);
		}
		else
		{
			ft_putstr("ERROR\n");
			return (0);
		}
		while ((ret = read(0, buf, 4)) > 0)
		{
			if (ft_strcmp(buf, "sa") == 1)
			{
				swap_data(stack);
			}
		}
	}
	return (0);
}
