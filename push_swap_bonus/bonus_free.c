/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <vasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 20:45:02 by vasargsy          #+#    #+#             */
/*   Updated: 2022/06/30 16:57:36 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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

void	free_stacks(t_stack **a, t_stack **b)
{
	stack_free(a);
	stack_free(b);
}
