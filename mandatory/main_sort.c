/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <vasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 18:47:30 by vasargsy          #+#    #+#             */
/*   Updated: 2022/09/05 16:28:41 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	buterfly_to_arr(t_stack **a, t_stack **b)
{
	int	max;
	int	size_b;
	int	f;

	size_b = stack_size(b);
	while (b && (*b))
	{
		//max = max_in_stack(b, size_b);
		max = size_b - 1;
		f = elem_upper_middle(b, size_b, max);
		while ((*b)->index != max)
		{
			if (!f)
				rb(b);
			else
				rrb(b);
		}
		pa(a, b);
		size_b = stack_size(b);
	}
}

void	buterfly_sort(t_stack **a, t_stack **b, int n)
{
	int	counter;
	int	size;

	size = stack_size(a);
	counter = 0;
	while (counter < size)
	{
		if ((*a)->index <= counter)
		{
			pb(a, b);
			rb(b);
			counter++;
		}
		else if ((*a)->index <= counter + n)
		{
			pb(a, b);
			counter++;
		}
		else
			ra(a);
	}
	buterfly_to_arr(a, b);
}

t_stack	*next_min(t_stack *stack)
{
	int		first;
	t_stack	*node;
	t_stack	*min_node;

	min_node = NULL;
	first = 0;
	node = stack;
	while (node)
	{
		if (node -> index == -1 && (first == 0
				|| node -> data < min_node -> data))
		{
			first = 1;
			min_node = node;
		}
		node = node -> next;
	}
	return (min_node);
}

void	indexing(t_stack **stack)
{
	t_stack	*top;
	int		index;

	index = 0;
	top = next_min(*stack);
	while (top)
	{
		top -> index = index;
		index++;
		top = next_min(*stack);
	}
}

void	main_sort(t_stack **a, t_stack **b)
{
	if (stack_size(a) <= 100)
		buterfly_sort(a, b, 15);
	else
		buterfly_sort(a, b, 30);
}
