#include "push_swap.h"

int		search(t_block *list, int m)
{
	t_block *lst;

	lst = list;
	while (lst)
	{
		if (lst->data <= m)
			return (1);
		lst = lst->next;
	}
	return (0);
}