/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 11:52:04 by mdube             #+#    #+#             */
/*   Updated: 2019/09/07 14:49:45 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_block			*create_stack(int argc, char **argv)
{
	int			i;
	const char	**numbers;
	t_block		*head;
	t_block		*node;
	t_block		*temp;

	temp = NULL;
	head = NULL;
	node = NULL;
	numbers = (const char **)argv;
	i = 1;
	node = create_node();
	node->data = ft_atoi(numbers[i++]);
	head = node;
	while (--argc > 1)
	{
		temp = create_node();
		temp->data = ft_atoi(numbers[i++]);
		node->next = temp;
		node = node->next;
	}
	return (head);
}
