/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <vasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:29:20 by vasargsy          #+#    #+#             */
/*   Updated: 2022/06/29 13:00:45 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_stack **a)
{
	if ((*a)->data > (*a)->next->data)
		sa(a);
}

void	sort_3(t_stack **a)
{
	int	data1;
	int	data2;
	int	data3;

	data1 = (*a)->data;
	data2 = (*a)->next->data;
	data3 = (*a)->next->next->data;
	if (data1 < data2 && data2 > data3 && data1 < data3)
	{
		sa(a);
		ra(a);
	}
	else if (data1 > data2 && data2 < data3 && data1 < data3)
		sa(a);
	else if (data1 < data2 && data2 > data3 && data1 > data3)
		rra(a);
	else if (data1 > data2 && data2 < data3 && data1 > data3)
		ra(a);
	else if (data1 > data2 && data2 > data3 && data1 > data3)
	{
		sa(a);
		rra(a);
	}
}

void	sort_4(t_stack **a, t_stack **b)
{
	int	i;

	i = index_min(*a);
	if (i == 1)
		sa(a);
	else if (i == 2)
	{
		rra(a);
		rra(a);
	}
	else if (i == 3)
		rra(a);
	if (check_sort(*a))
		return ;
	pb(a, b);
	sort_3(a);
	pa(a, b);
}

void	sort_5(t_stack **a, t_stack **b)
{
	int	i;

	i = index_min(*a);
	if (i == 1)
		sa(a);
	else if (i == 2)
	{
		ra(a);
		ra(a);
	}
	else if (i == 3)
	{
		rra(a);
		rra(a);
	}
	else if (i == 4)
		rra(a);
	if (check_sort(*a))
		return ;
	pb(a, b);
	sort_4(a, b);
	pa(a, b);
}

void	sorting(t_stack **a, t_stack **b, int numbers)
{
	indexing(a);
	if (numbers < 2)
		return ;
	else if (numbers == 2)
		sort_2(a);
	else if (numbers == 3)
		sort_3(a);
	else if (numbers == 4)
		sort_4(a, b);
	else if (numbers == 5)
		sort_5(a, b);
	else
		main_sort(a, b);
}
