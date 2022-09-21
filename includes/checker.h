/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <vasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 14:12:42 by vasargsy          #+#    #+#             */
/*   Updated: 2022/06/29 15:01:40 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CHECKER_H
# define CHECKER_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 80
# endif

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
}				t_stack;

char		*get_next_line(int fd);
char		*ft_substr(char	*s, unsigned int start, size_t len);
char		*ft_strchr(char *s, int c);
char		*ft_strdup(char *s1);
char		*ft_strjoin(char *s1, char *s2);
int			ft_strcmp(char *s1, char *s2);
int			ft_strlen(char *s);
int			stack_size(t_stack **stack);

void		compare(char *line, t_stack **a, t_stack **b);
void		gnl(t_stack **a, t_stack **b);
void		sequel(int argc, char **argv, t_stack **a, t_stack **b);

char		**ft_split(char const *s, char c);
long int	ft_atoi_long(const char *str);

void		make_stack(t_stack **stack, char **arr);
t_stack		*new_node(int nbr);
t_stack		*last_node(t_stack *stack);
void		stack_free(t_stack **stack);
void		free_stacks(t_stack **a, t_stack **b);

int			checking(char *str);
int			check_sort(t_stack *a);
int			check_double(char **array, char *str, int pos);
int			check_alpha(char *str);
void		print_error(void);

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

#endif
