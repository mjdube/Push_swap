#include "push_swap.h"

static int		next_max(t_block *list, int max)
{
	t_block     *lst;
	int		find_max;

	lst = list;
	find_max = list->data;
	while (lst)
	{
		if (lst->data > find_max && lst->data != max)
			find_max = lst->data;
		lst = lst->next;
	}
	return (find_max);
}

static int		max_pos(t_block *lst, int max_1, int max_2)
{
	int i;

	i = 0;
	while (lst)
	{
		if (lst->data == max_1 || lst->data == max_2)
			break ;
		lst = lst->next;
		i++;
	}
	return (i);
}

static void		done(t_block **stack_a, t_block **stack_b)
{
	if (!*stack_b)
		return ;
	if ((*stack_b)->next && (*stack_b)->data > (*stack_b)->next->data)
	{
		swap_data(&(*stack_b));
		ft_putendl("sb");
		push(stack_b, stack_a);
		ft_putendl("pa");
		if ((*stack_a)->data > (*stack_b)->next->data)
		{	
			swap_data(stack_a);
			ft_putendl("sa");
		}
		push(stack_b, stack_a);
		ft_putendl("pa");
		if ((*stack_a)->data > (*stack_a)->next->data)
		{	
			swap_data(stack_a);
			ft_putendl("sa");
		}
		return ;
	}
	push(&(*stack_b), &(*stack_a));
	ft_putendl("pa");
	if ((*stack_a)->data > (*stack_a)->next->data)
	{	
		swap_data(stack_a);
		ft_putendl("sa");
	}
}

void			reverse_sorting(t_block **stack_a, t_block **stack_b)
{
	int		max_1;
	int		max_2;
	int		position;

	max_1 = max_value(*stack_b);
	max_2 = next_max(*stack_b, max_1);
	position = min_pos(*stack_b, max_1);
	while (list_length(*stack_b) > 1)
	{
		if ((*stack_b)->data == max_1 || (*stack_b)->data == max_2)
		{
			push(stack_b, stack_a);
			ft_putendl("pa");
			max_1 = max_value(*stack_b);
			max_2 = next_max(*stack_b, max_1);
			if ((*stack_a)->data < max_1)
				max_2 = max_1;
			if ((*stack_a)->data > (*stack_a)->next->data)
			{	
				swap_data(stack_a);
				ft_putendl("sa");
			}
		}
		if (max_pos(*stack_b, max_1, max_2) < list_length(*stack_b) / 2)
		{	
			rotate_normal(stack_b);
			ft_putendl("rb");
		}
		else
		{	
			rotate_reverse(stack_b);
			ft_putendl("rrb");
		}
	}
	done(stack_a, stack_b);
}