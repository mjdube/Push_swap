/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 11:52:04 by mdube             #+#    #+#             */
/*   Updated: 2019/08/03 11:44:49 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "check.h"
#include <string.h>

block			*create_stack(int argc, char **argv)
{
	int		i;
	const char **nodes;
	block	*head;
	block	*node;
	block	*temp;

	temp = NULL;
	head = NULL;
	node = NULL;
	nodes = (const char **)argv;
	i = 1;
	node = createNode();
	node->data = ft_atoi(nodes[i]);
	head = node;
	while (--argc > 0)
	{
		temp = createNode();
		temp->data = ft_atoi(nodes[++i]);
		node->next = temp;
		node = node->next;
	}
	return (head);
}
