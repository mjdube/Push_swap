#include "push_swap.h"

static int		*replicate_list(t_block *list)
{
	int		i;
	int		*rep;
	t_block	*temp;

	i = 0;
	temp = list;
	rep = (int *)ft_memalloc(sizeof(int) * (list_length(temp) + 1));
	while (temp)
	{
		rep[i++] = temp->data;
		temp = temp->next;
	}
	free(temp);
	return (rep);
}

static int		middle(t_block *list, int *rep, int num, int loop)
{
	int	i;

	i = 0;
	while (i < ((int)list_length(list) * num / loop) - 1)
		i++;
	i = rep[i];
	free(rep);
	return (i);
}

int				find_middle(t_block *list, int num, int loop)
{
	int         i;
	int         *rep;
	int         j;

	i = 0;
	rep = replicate_list(list);
	while (i < (int)list_length(list) - 1)
	{
		if (rep[i] < rep[i + 1])
			while (rep[i] < rep[i + 1])
				i++;
		else
		{
			j = 0;
			while (rep[i + j] > rep[i + j + 1] && i + j < (int)list_length(list) - 1)
			{
				ft_swap(&rep[i + j], &rep[i + j + 1]);
				j++;
			}
			i = 0;
		}
	}
	return (middle(list, rep, num, loop));
}