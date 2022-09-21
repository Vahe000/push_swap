/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <vasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:53:28 by vasargsy          #+#    #+#             */
/*   Updated: 2022/09/05 12:42:16 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	compare(char *line, t_stack **a, t_stack **b)
{
	if (!ft_strcmp(line, "ra\n"))
		ra(a);
	else if (!ft_strcmp(line, "rb\n"))
		rb(b);
	else if (!ft_strcmp(line, "rr\n"))
		rr(a, b);
	else if (!ft_strcmp(line, "rra\n"))
		rra(a);
	else if (!ft_strcmp(line, "rrb\n"))
		rrb(b);
	else if (!ft_strcmp(line, "rrr\n"))
		rrr(a, b);
	else if (!ft_strcmp(line, "sa\n"))
		sa(a);
	else if (!ft_strcmp(line, "sb\n"))
		sb(b);
	else if (!ft_strcmp(line, "ss\n"))
		ss(a, b);
	else if (!ft_strcmp(line, "pa\n"))
		pa(a, b);
	else if (!ft_strcmp(line, "pb\n"))
		pb(a, b);
	else
		print_error();
}

void	gnl(t_stack **a, t_stack **b)
{
	if (!*a)
	{
		print_error();
		exit(0);
	}
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		compare(line, a, b);
		line = get_next_line(0);
	}
	if (!check_sort(*a) || *b != NULL)
		write (1, "KO\n", 3);
	else
		write (1, "OK\n", 3);
}

void	sequel(int argc, char **argv, t_stack **a, t_stack **b)
{
	int		i;
	char	*str;
	char	**arr;

	str = "\0";
	i = 1;
	while (i != argc)
	{
		str = ft_strjoin(str, argv[i++]);
		str = ft_strjoin(str, " ");
	}
	i = 0;
	arr = NULL;
	if (checking(str) == 1)
		arr = ft_split(str, ' ');
	make_stack(a, arr);
	gnl(a, b);
	free_stacks(a, b);
	return ;
}

int	main(int argc, char **argv)
{
	t_stack	**a;
	t_stack	**b;

	a = (t_stack **)malloc(sizeof(t_stack *));
	b = (t_stack **)malloc(sizeof(t_stack *));
	if (!a || !b)
		return (0);
	*a = NULL;
	*b = NULL;
	if (argc < 2)
		return (0);
	sequel(argc, argv, a, b);
	return (0);
}
