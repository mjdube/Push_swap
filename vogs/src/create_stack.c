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

void	empty_stack(t_block **lst)
{
	t_block *temp;

	while ((*lst)->next != NULL)
	{
		temp = *lst;
		*lst = (*lst)->next;
		free(temp);
	}
	// free(temp);
}

static void	rest_of_node(t_block **list, char *str)
{
	t_block	*node;
	t_block	*lst;

	lst = *list;
	if (!(node = (t_block *)malloc(sizeof(t_block))))
		return ;
	node->data = ft_atoi(str);
	node->next = NULL;
	while (lst->next)
		lst = lst->next;
	lst->next = node;
	node = NULL;
}

static void	head_node(t_block **list, char *str)
{
	char	**arr;
	int		i;

	i = 0;
	arr = ft_strsplit(str, ' ');
	if (!*list)
	{
		if (!(*list = (t_block *)malloc(sizeof(t_block))) || !arr)
			return ;
		(*list)->data = ft_atoi(arr[i++]);
		(*list)->next = NULL;
	}
	while (arr[i])
		rest_of_node(list, arr[i++]);
	ft_delarray(arr);
}

t_block			*create_stack(char **arr)
{
	t_block		*list;
	int			i;

	i = 0;
	if (!(list = (t_block *)malloc(sizeof(t_block))) || !arr)
		return (NULL);
	list->data = ft_atoi(arr[i++]);
	list->next = NULL;
	while (arr[i])
	{
		if (num_of_words(arr[i]) > 1)
			head_node(&list, arr[i]);
		else
			rest_of_node(&list, arr[i]);
		i++;
	}
	return (list);
}