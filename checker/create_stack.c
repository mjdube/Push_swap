/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 11:52:04 by mdube             #+#    #+#             */
/*   Updated: 2019/07/22 18:06:51 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "check.h"
#include <string.h>

block			*create_stack(int NumNodes, char *nums)
{
	int		i;
	const char *nodes;
	block	*head;
	block	*node;
	block	*temp;

	temp = NULL;
	head = NULL;
	node = NULL;
	nodes = (const char *)nums;
	i = 1;
	node = createNode();
	node->data = ft_atoi(nodes[i]);
	head = node;
	while (++i <= NumNodes)
	{
		temp = createNode();
		temp->data = ft_atoi(nodes[i]);
		node->next = temp;
		node = node->next;
	}
	return (head);
}
