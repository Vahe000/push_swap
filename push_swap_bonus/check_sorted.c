/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <vasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:37:25 by vasargsy          #+#    #+#             */
/*   Updated: 2022/06/29 15:00:28 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	check_sort(t_stack *a)
{
	if (!a)
	{
		print_error();
		return (0);
	}
	while (a -> next)
	{
		if (a -> data > a -> next -> data)
			return (0);
		a = a -> next;
	}
	return (1);
}
