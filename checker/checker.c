/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 17:17:12 by mdube             #+#    #+#             */
/*   Updated: 2019/07/13 09:01:11 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		isValid(char *str)
{
	if (ft_strcmp((const char *)str, "sa") == 1)
		return (1);
	else if (ft_strcmp((const char *)str, "sb") == 1)
		return (1);
	else if (ft_strcmp((const char *)str, "sa") == 1)
		return (1);
	else if (ft_strcmp((const char *)str, "ss") == 1)
		return (1);
	else if (ft_strcmp((const char *)str, "pa") == 1)
		return (1);
	else if (ft_strcmp((const char *)str, "pb") == 1)
		return (1);
	else if (ft_strcmp((const char *)str, "ra") == 1)
		return (1);
	else if (ft_strcmp((const char *)str, "rb") == 1)
		return (1);
	else if (ft_strcmp((const char *)str, "rr") == 1)
		return (1);
	else if (ft_strcmp((const char *)str, "rra") == 1)
		return (1);
	else if (ft_strcmp((const char *)str, "rrb") == 1)
		return (1);
	else if (ft_strcmp((const char *)str, "rrr") == 1)
		return (1);
	else
		return (0);
}

typedef struct s_list
{
	int data;
	struct s_list *next;
}				t_list;

t_list     newNode(int num)
{
	t_list *node;

	node = (t_list*)malloc(sizeof(t_list));
	node->data = num;
	node->next = NULL;
	return (node);
}

t_list		createStack(int n, int number)
{
	t_list *temp;
	t_list *head;
	t_list *node;
	int i;

	i = n;
	temp = NULL;
	head = NULL;
	node = NULL;
	temp = newNode(number);
	if (head == NULL)
		head = temp;
	else
	{

		node = head;
		while (node->next != NULL)
			p = p->next;
		p->next = temp;
	}
	return (head);
}


int		main(int argc, char **argv)
{
	char *line;
	int i;
	t_list *head;

	head = NULL;
	if (argc > 1)
	{

		while ((get_next_line(0, &line)) > 0)
		{
			buf[ret] = '\0';
			if (isValid(buf) == 1)
			{
				i = argc;
				while (0 <= i)
				{
					--i;
					if (temp->NULL)
					{
						temp = newNode(ft_atoi(argv[argc - i]));
					}
				}

			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
