/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 17:17:12 by mdube             #+#    #+#             */
/*   Updated: 2019/07/22 11:51:42 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
int		isValid(char *str)
{
	if (ft_strcmp((const char *)str, "sa") == 1)
		return (1);
	else if (ft_strcmp((const char *)str, "sb") == 1)
		return (1);
	else if (ft_strcmp((const char *)str, "sa") == 1)
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
*/
int		main(int argc, char **argv)
{
	/*
	 * char *line;
	int i;
	t_list *head;

	head = NULL;
	if (argc > 1)
	{

		while ((get_next_line(0, &line)) > 0)
		{
			buf[ret] = '\0';
			if (isValid(buf) == 1)
			{
				i = argc;
				while (0 <= i)
				{
					--i;
					if (temp->NULL)
					{
						temp = newNode(ft_atoi(argv[argc - i]));
					}
				}

			}
		}
	}
	write(1, "\n", 1);*/
	block *HEAD = create_stack(argc, *argv);
	while (HEAD->next != NULL)
	{
		printf("%i\n", HEAD->data);
		HEAD = HEAD->next;
	}
	return (0);
}
