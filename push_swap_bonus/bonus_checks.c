/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_checks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <vasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:55:34 by vasargsy          #+#    #+#             */
/*   Updated: 2022/07/01 12:34:23 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	checking(char *str)
{
	char		**arr;
	int			i;
	long int	a;	

	i = 0;
	arr = ft_split(str, ' ');
	while (arr[i])
	{
		a = ft_atoi_long(arr[i]);
		if (!check_double(arr, arr[i], i) || !check_alpha(arr[i])
			|| a < -2147483648 || a > 2147483647)
		{
			write(1, "Error\n", 6);
			exit(0);
		}
		i++;
	}
	i = -1;
	while (arr[++i])
		free(arr[i]);
	free(arr);
	return (1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

int	check_double(char **arr, char *str, int pos)
{
	int	i;

	i = 0;
	while (i != pos)
	{
		if (ft_strcmp(arr[i], str) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	check_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+' || str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	stack_size(t_stack **stack)
{
	t_stack	*node;
	int		i;

	i = 0;
	if (stack)
	{
		node = *stack;
		while (node)
		{
			i++;
			node = node->next;
		}
	}
	return (i);
}
