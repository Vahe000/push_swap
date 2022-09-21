/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_creator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <vasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 20:22:15 by vasargsy          #+#    #+#             */
/*   Updated: 2022/06/30 16:52:57 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*new_node(int nbr)
{
	t_stack	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (0);
	node->data = nbr;
	node->index = -1;
	node->next = NULL;
	return (node);
}

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

void	free_stacks(t_stack **a, t_stack **b)
{
	stack_free(a);
	stack_free(b);
}
