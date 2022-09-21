/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <vasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 20:22:08 by vasargsy          #+#    #+#             */
/*   Updated: 2022/07/01 12:35:05 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
	int				index;
}				t_stack;

void		push_front(t_stack **stack, t_stack *new_node);
void		push_back(t_stack **stack, t_stack *new_node);
void		push_(t_stack **stack1, t_stack **stack2);
void		pa(t_stack **a, t_stack **b);
void		pb(t_stack **a, t_stack **b);

void		swap(t_stack **stack);
void		sa(t_stack **a);
void		sb(t_stack **b);
void		ss(t_stack **a, t_stack **b);

void		rotate(t_stack **stack);
void		ra(t_stack **a);
void		rb(t_stack **b);
void		rr(t_stack **a, t_stack **b);

void		rrotate(t_stack **stack);
void		rra(t_stack **a);
void		rrb(t_stack **b);
void		rrr(t_stack **a, t_stack **b);

void		make_stack(t_stack **stack, char **arr);
void		indexing(t_stack **stack);
t_stack		*next_min(t_stack *stack);
t_stack		*last_node(t_stack *stack);
int			index_min(t_stack *a);
int			stack_size(t_stack **stack);
int			max_in_stack(t_stack **stack, int size);
int			elem_upper_middle(t_stack **stack, int size, int max);
void		stack_free(t_stack **stack);
void		free_stacks(t_stack **a, t_stack **b);
void		free_str(char **arr);

char		**ft_split(char const *s, char c);
long int	ft_atoi_long(const char *str);
char		*ft_strjoin(char *s1, char const *s2);
int			ft_strcmp(char *s1, char *s2);
int			ft_strlen(const char *s);

int			checking(char *str);
int			check_sort(t_stack *a);
int			check_double(char **array, char *str, int pos);
int			check_alpha(char *str);
void		print_error(void);

void		sorting(t_stack **a, t_stack **b, int numbers);
void		sort_2(t_stack **a);
void		sort_3(t_stack **a);
void		sort_4(t_stack **a, t_stack **b);
void		sort_5(t_stack **a, t_stack **b);
void		main_sort(t_stack **a, t_stack **b);
void		buterfly_sort(t_stack **a, t_stack **b, int n);
void		buterfly_to_arr(t_stack **a, t_stack **b);

/*void	print_stack(t_stack **a, t_stack **b);*/

#endif
