#include "push_swap.h"

int		min_value(t_block *list)
{
	int		min;
	t_block	*temp;

	temp = list;
	min = temp->data;
	while (temp)
	{
		if (temp->data < min)
			min = temp->data;
		temp = temp->next;
	}
	return (min);
}

int		max_value(t_block *list)
{
	int		max;
	t_block	*temp;

	temp = list;
	max = temp->data;
	while (temp)
	{
		if (temp->data > max)
			max = temp->data;
		temp = temp->next;
	}
	return (max);
}

int		min_pos(t_block *list, int min)
{
	int		pos;
	t_block	*temp;

	pos = 0;
	temp = list;
	while (temp && temp->data != min)
	{
		temp = temp->next;
		pos++;
	}
	return (pos);
}

int		ft_pos(t_block *list, int min, int n_min, int p)
{
	int		pos;
	t_block	*temp;

	pos = 0;
	temp = list;
	while (temp)
	{
		if (temp->data == min || temp->data == n_min || temp->data == p)
			break ;
		temp = temp->next;
		pos++;
	}
	return (pos);
}