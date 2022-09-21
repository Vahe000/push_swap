/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_rrotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <vasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:58:47 by vasargsy          #+#    #+#             */
/*   Updated: 2022/06/29 14:58:02 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rrotate(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*first;

	first = *stack;
	temp = *stack;
	if (stack_size(stack) >= 2)
	{
		while (temp -> next -> next)
			temp = temp -> next;
		temp -> next -> next = first;
		*stack = temp -> next;
		temp -> next = NULL;
	}
}

void	rra(t_stack **a)
{
	rrotate(a);
}

void	rrb(t_stack **b)
{
	rrotate(b);
}

void	rrr(t_stack **a, t_stack **b)
{
	rrotate(a);
	rrotate(b);
}
