/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checking_numbers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 19:56:55 by mdube             #+#    #+#             */
/*   Updated: 2019/09/07 14:15:40 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_number(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((i != 0 && str[i] == '-'))
			return (0);
		if (str[0] != '-' && !ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int				check_str(char *str)
{
	if (is_number(str) == 0)
	{
		ft_putendl("Error");
		return (0);
	}
	if (int_max(str))
	{
		ft_putendl("Error");
		return (0);
	}
	return (1);
}

int		param(char *str)
{
	int		i;
	char	**lst;

	lst = ft_strsplit(str, ' ');
	i = 0;
	while (lst[i])
	{
		if (check_str(lst[i]) == 0)
			return (0);
		if (dup_nums(lst, lst[i], i))
		{
			ft_putendl("Error");
			return (0);
		}
		i++;
	}
	ft_delarray(lst);
	return (1);
}

int		ft_checking_numbers(char **argv)
{
	int i;

	i = 0;
	while (argv[i])
	{
		if (num_of_words(argv[i]) > 1)
		{
			if (param(argv[i++]) == 0)
				return (0);
		}
		else
		{
			if (check_str(argv[i]) == 0)
				return (0);
			if (dup_nums(argv, argv[i], i))
				return (0);
			i++;
		}
	}
	return (1);
}