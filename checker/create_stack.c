/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 11:52:04 by mdube             #+#    #+#             */
/*   Updated: 2019/08/13 12:55:18 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "check.h"
#include <string.h>

block			*create_stack(int argc, char **argv)
{
	int		i;
	const char **numbers;
	block	*head;
	block	*node;
	block	*temp;

	temp = NULL;
	head = NULL;
	node = NULL;
	numbers = (const char **)argv;
	i = 1;
	node = createNode();
	node->data = ft_atoi(numbers[i++]);
	head = node;
	while (--argc > 1)
	{
		temp = createNode();
		temp->data = ft_atoi(numbers[i++]);
		node->next = temp;
		node = node->next;
	}
	return (head);
}
