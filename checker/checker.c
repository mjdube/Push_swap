/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 17:17:12 by mdube             #+#    #+#             */
/*   Updated: 2019/07/29 18:18:55 by mdube            ###   ########.fr       */
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

int		main(int argc, char **argv)
{

	return (0);
}
