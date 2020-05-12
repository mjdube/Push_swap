#include "push_swap.h"

static int		check(t_block *list, int min_1, int min_2, int pos)
{
	t_block *lst;

	lst = list;
	while (lst)
	{
		if (lst->data == min_1 || lst->data == min_2 || lst->data == pos)
			return (1);
		lst = lst->next;
	}
	return (0);
}

static int		find_min(t_block *list, int min)
{
	int		new_min;
	t_block	*lst;

	lst = list;
	new_min = list->data;
	while (lst)
	{
		if (lst->data < new_min && lst->data != min)
			new_min = lst->data;
		lst = lst->next;
	}
	free(lst);
	return (new_min);
}

static void		values(t_block **list, int *min, int *n_min, int *p)
{
	*min = min_value(*list);
	*n_min = find_min(*list, *min);
	*p = find_min(*list, *n_min);
}

static void		finish(t_block **stack_a, t_block **stack_b, int even)
{
    loop_stack_1(stack_a, stack_b);
	while (--even >= 0)
	{
		if ((*stack_a)->data > (*stack_a)->next->data)
        {
			swap_data(stack_a);
			ft_putendl("sa");
        }
		push(stack_b, stack_a);
		ft_putendl("pa");
	}
}

void			config(t_block **stack_a, t_block **stack_b)
{
	t_values	value;

    value.equal = 0;
	values(stack_a, &value.min_1, &value.min_2, &value.position);
	while (list_length(*stack_a) > 6)
	{
		if ((*stack_a)->data == value.min_1 || (*stack_a)->data == value.min_2 || (*stack_a)->data == value.position)
		{
			push(stack_a, stack_b);
            ft_putendl("pb");
			if ((*stack_b)->data < (*stack_b)->next->data)
			{
				swap_data(stack_b);
				ft_putendl("sb");
            }	
			value.equal++;
			if (!check(*stack_a, value.min_1, value.min_2, value.position))
			{
				values(stack_a, &value.min_1, &value.min_2, &value.position);
			}
		}
		if (ft_pos(*stack_a, value.min_1, value.min_2, value.position) <= (int)list_length(*stack_a) / 2)
        {
			rotate_normal(stack_a);
			ft_putendl("ra");
        }
		else
        {
			rotate_reverse(stack_a);
			ft_putendl("rra");
        }
			
	}
	finish(stack_a, stack_b, value.equal);
}