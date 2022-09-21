/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <vasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:56:56 by vasargsy          #+#    #+#             */
/*   Updated: 2022/06/29 14:35:13 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	push_(t_stack **stack1, t_stack **stack2)
{
	t_stack	*temp;

	temp = *stack1;
	*stack1 = (*stack1)->next;
	if (!stack2)
	{
		temp->next = NULL;
		*stack2 = temp;
	}
	else
	{
		temp->next = *stack2;
		*stack2 = temp;
	}
}

void	push_back(t_stack **stack, t_stack *new_node)
{
	t_stack	*back;

	if (new_node == NULL)
		return ;
	if (*stack)
	{
		back = last_node(*stack);
		back -> next = new_node;
		new_node -> next = NULL;
	}
	else
		*stack = new_node;
}

void	pa(t_stack **a, t_stack **b)
{
	if ((*b) == NULL)
		return ;
	push_(b, a);
}

void	pb(t_stack **a, t_stack **b)
{
	if ((*a) == NULL)
		return ;
	push_(a, b);
}
