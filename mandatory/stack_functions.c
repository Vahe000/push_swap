/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <vasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 20:13:17 by vasargsy          #+#    #+#             */
/*   Updated: 2022/06/29 13:01:28 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	index_min(t_stack *a)
{
	int	min;
	int	i;
	int	index;

	min = a->data;
	i = 0;
	index = 0;
	while (a)
	{
		if (min > a->data)
		{
			min = a->data;
			index = i;
		}
		i++;
		a = a->next;
	}
	return (index);
}

t_stack	*last_node(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack -> next)
		stack = stack -> next;
	return (stack);
}

int	max_in_stack(t_stack **stack, int size)
{
	int		max;
	int		i;
	t_stack	*cur;

	cur = (*stack);
	max = cur->index;
	i = 0;
	while (i < size)
	{
		if (cur->index > max)
			max = cur->index;
		cur = cur->next;
		i++;
	}
	return (max);
}

int	elem_upper_middle(t_stack **stack, int size, int max)
{
	int		i;
	t_stack	*cur;

	cur = *stack;
	i = 0;
	while (cur && cur->index != max)
	{
		cur = cur->next;
		i++;
	}
	if (i >= size / 2)
		return (1);
	else
		return (0);
}

void	stack_free(t_stack **stack)
{
	t_stack	*node;
	t_stack	*temp;

	temp = *stack;
	while (temp)
	{
		node = temp;
		temp = temp->next;
		free(node);
	}
	free(stack);
}
