/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <vasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 20:49:18 by vasargsy          #+#    #+#             */
/*   Updated: 2022/06/29 14:59:48 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	make_stack(t_stack **stack, char **arr)
{
	int		i;
	t_stack	*new;

	i = 0;
	if (!stack && !(*stack))
		return ;
	while (arr[i])
	{
		new = new_node(ft_atoi_long(arr[i]));
		push_back(stack, new);
		i++;
	}
}

long int	ft_atoi_long(const char *str)
{
	long int	a;
	int			b;

	a = 0;
	b = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			b *= -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		a = a * 10 + *str - '0';
		str++;
	}
	return (a * b);
}

t_stack	*last_node(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack -> next)
		stack = stack -> next;
	return (stack);
}

t_stack	*new_node(int nbr)
{
	t_stack	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (0);
	node->data = nbr;
	node->next = NULL;
	return (node);
}

void	print_error(void)
{
	write(1, "Error\n", 6);
	exit(0);
}
