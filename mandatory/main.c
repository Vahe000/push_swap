/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <vasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 20:22:11 by vasargsy          #+#    #+#             */
/*   Updated: 2022/06/30 22:35:15 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void	print_stack(t_stack **a, t_stack **b)
{
	t_stack *cur1 = *a;
	t_stack *cur2 = *b;

	while (cur1 || cur2)
	{
		if (cur1)
		{
			printf("%d index = %d", cur1->data, cur1->index);
			cur1 = cur1->next;
		}
		printf("   ");
		if (cur2)
		{
			printf("%d index = %d", cur2->data, cur2->index);
			cur2 = cur2->next;
		}
		printf("\n");
	}
	printf("_    _\na    b");
}*/

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
	if (check_sort(*a))
	{
		free_stacks(a, b);
		return ;
	}
	argc--;
	sorting(a, b, argc);
	free_str(arr);
	free(str);
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
	free_stacks(a, b);
	//sleep(1000);
	return (0);
}
