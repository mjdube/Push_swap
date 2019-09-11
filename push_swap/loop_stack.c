/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 15:00:59 by mdube             #+#    #+#             */
/*   Updated: 2019/08/31 15:01:03 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void        loop_stack(t_block **stack_a, t_block **stack_b, unsigned int len, int range)
{
    
    
    unsigned int split;
    t_block *lst;
    // t_block *lst2;
    int small;

    small = small_number(*stack_a);
    //big = big_number(*stack_a);
    
    
    lst = *stack_a;
    while (lst != NULL)
    {
        // small = small_number(*stack_a);
        if (small >= lst->data && lst->data <= small + range - 1)
        {
            // ft_putnbr(lst->data);
            ft_putnbr(small + range - 1);
            if (lst->data == (*stack_a)->data)
            {
                push(&(*stack_a), &(*stack_b));
                ft_putendl("pb");
            }
            else if (lst->data != (*stack_a)->data)
            {
                // lst2 = *stack_a;
                split = len / 2;
                
                while (lst->data != (*stack_a)->data)
                {
                    if (top_bottom(*stack_a, lst->data, split) == 1)
                    {
                        rotate_normal(&(*stack_a));
                        ft_putendl("ra");
                         ft_putnbr((*stack_a)->data);
                        // ft_putnbr(small);
                        
                    }
                    else if (top_bottom(*stack_a, (*stack_a)->data, split) == 2)
                    {
                        rotate_reverse(&(*stack_a));
                        ft_putendl("rra");
                    }
                }
                if (lst->data == (*stack_a)->data)
                {
                    push(&(*stack_a), &(*stack_b));
                    ft_putendl("pb");
                    lst = *stack_a;
                    break ;
                    
                    }
            }
            
        }
        else 
            lst = lst->next;
    }
   /* int small;
    unsigned int split;
    int len;

    small = small_number((*stack_a));
    len = list_length((*stack_a));
    if (len == 0)
        return ;
<<<<<<< HEAD
    if (compare((*stack_a)->data, (*stack_a)->next->next->data) && compare((*stack_a)->next->data, (*stack_a)->next->next->data))
    {
        swap_data(*(&stack_a));
        ft_putendl("sa");
    }
    else if ((*stack_a)->data != small)
    {
        split = len / 2;

=======
    if (len <= 3)
    //if (compare((*stack_a)->data, (*stack_a)->next->data) && is_sorted_a((*stack_a)->next))
    {
        three_nums(&(*stack_a));
    }
    // else if (compare((*stack_a)->data, (*stack_a)->next->data) && compare((*stack_a)->next->next->data, (*stack_a)->next->data))
    else if (compare((*stack_a)->data, (*stack_a)->next->data))
    {
            swap_data(*(&stack_a));
            ft_putendl("sa");
    }
    else if ((*stack_a)->data != small)
    {
<<<<<<< HEAD
        split = len / 2;
>>>>>>> 194804de1e585a2c2f6b511cdba3acfd328cd1d8
        if (top_bottom(*stack_a, small, split) == 1)
=======
        split = (unsigned int)len / 2;
        more_nums(&(*stack_a), small, split);
       //if (top_bottom(*stack_a, small, split) == 1)
>>>>>>> fd3cccbe57d8c9732a3e4a3d9a36f5420f3c9936
        {
            rotate_normal(*(&stack_a));
            ft_putendl("ra");
        }
        else if (top_bottom(*stack_a, small, split) == 2)
        {
            rotate_reverse(*(&stack_a));
            ft_putendl("rra");
        }
    }
    else if ((*stack_a)->data == small && is_sorted(*stack_a) == 0)
    {
        push(*(&stack_a), *(&stack_b));
        ft_putendl("pb");
    }*/
}