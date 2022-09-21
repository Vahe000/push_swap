/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <vasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:18:40 by vasargsy          #+#    #+#             */
/*   Updated: 2022/06/29 12:58:45 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*first;

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

void	ra(t_stack **a)
{
	if ((*a) == NULL)
		return ;
	rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	if ((*b) == NULL)
		return ;
	rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	if ((*a) == NULL || (*b) == NULL)
		return ;
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}
