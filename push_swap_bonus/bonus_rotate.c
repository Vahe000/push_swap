/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <vasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:58:02 by vasargsy          #+#    #+#             */
/*   Updated: 2022/06/29 14:51:43 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*first;

	if (stack_size(stack) >= 2)
	{
		if (!(*stack)->next)
			return ;
		last = *stack;
		first = (*stack)->next;
		while ((*stack)->next)
			*stack = (*stack)->next;
		(*stack)->next = last;
		last->next = NULL;
		*stack = first;
	}
}

void	ra(t_stack **a)
{
	rotate(a);
}

void	rb(t_stack **b)
{
	rotate(b);
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
}
