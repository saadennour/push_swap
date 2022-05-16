/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 00:23:28 by sfarhan           #+#    #+#             */
/*   Updated: 2022/05/12 17:59:44 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include "get_next_line_bonus.h"

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
	int				cmd;
	int				near;
}				t_stack;

void		tab_to_ll(char **av, int ac, t_stack **a);
int			check(char **av, int ac);
t_stack		*ft_lstnew(int data);
void		ft_lstadd_front(t_stack **lst, t_stack *new);
t_stack		*ft_lstlast(t_stack *lst);
void		ft_lstadd_back(t_stack **lst, t_stack *new);
void		print_ll(t_stack **stack);
t_stack		*pop(t_stack *head);
t_stack		*pop_last(t_stack *head);
int			ft_isdigit(int c);
int			duplicated(char **av, int ac);
long long	ft_atoi(const char *str);
void		swap(t_stack **stack, int c);
void		ss(t_stack **a, t_stack **b, int c);
void		push(t_stack **first, t_stack **sec, int c);
void		rotate(t_stack **stack, int c);
void		rr(t_stack **a, t_stack **b, int c);
void		r_rotate(t_stack **stack, int c);
void		rrr(t_stack **a, t_stack **b, int c);
int			find_max(t_stack **a, int need);
int			find_min(t_stack **a);
int			sorted(t_stack **a);
char		*ft_itoa(int n);
int			ft_lstsize(t_stack *lst);
char		**ft_split(char const *s, char c);
void		checker_errors(int ac, char **av);
void		done_or_not(t_stack **a, t_stack **b);

#endif