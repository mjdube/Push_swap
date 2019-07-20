/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 11:52:04 by mdube             #+#    #+#             */
/*   Updated: 2019/07/20 13:58:13 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <string.h>

block			*create_stack(int argc, char *argv)
{
	int		i;
	block	*head;
	block	*node;
	block	*temp;

	temp = NULL;
	head = NULL;
	node = NULL;
	i = 1;
	node = createNode();
	node->data = ft_atoi(argv[i]);
	head = node;
	while (++i < argc)
	{
		temp = createNode();
		temp->data = ft_atoi(argv[i]);
		node->next = temp;
		node = node->next;
	}
	return (head)
}
