/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <vasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:18:40 by vasargsy          #+#    #+#             */
/*   Updated: 2022/06/29 12:59:39 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrotate(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*first;

	first = *stack;
	temp = *stack;
	if (stack)
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
	if ((*a) == NULL)
		return ;
	rrotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	if ((*b) == NULL)
		return ;
	rrotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	if ((*a) == NULL || (*b) == NULL)
		return ;
	rrotate(a);
	rrotate(b);
	write(1, "rrr\n", 4);
}
