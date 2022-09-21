/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <vasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 20:22:18 by vasargsy          #+#    #+#             */
/*   Updated: 2022/06/29 13:01:55 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	int	temp;

	if (stack_size(stack) >= 2)
	{
		temp = (*stack)->data;
		(*stack)->data = (*stack)->next->data;
		(*stack)->next->data = temp;
		temp = (*stack)->index;
		(*stack)->index = (*stack)->next->index;
		(*stack)->next->index = temp;
	}
}

void	sa(t_stack **a)
{
	if ((*a) == NULL)
		return ;
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_stack **b)
{
	if ((*b) == NULL)
		return ;
	swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b)
{
	if ((*a) == NULL || (*b) == NULL)
		return ;
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}
