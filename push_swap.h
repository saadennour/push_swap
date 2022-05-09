/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 00:23:28 by sfarhan           #+#    #+#             */
/*   Updated: 2022/05/08 18:04:37 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include "get_next_line.h"

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
	int				cmd;
	int				near;
}				t_stack;

void		tab_to_ll(char **av, int ac, t_stack **a );
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
void		sort_3(t_stack **a);
void		sort_4(t_stack **a, t_stack **b);
void		sort_5(t_stack **a, t_stack **b);
int			find_max(t_stack **a, int need);
int			find_min(t_stack **a);
int			sorted(t_stack **a);
char		*ft_itoa(int n);
char		*first_digit(int nbr);
void		big_sort(t_stack **a, t_stack **b);
int			ft_lstsize(t_stack *lst);
int			get_index(t_stack **a, int num);
void		cmd_counter(t_stack **a, t_stack **b);
int			accorde(t_stack **a, int near);
int			find_min_cmd(t_stack **b, int c);
int			nearest(t_stack **a, int num);
void		short_cut(t_stack **a, t_stack **b, int move, int near);
void		better_move(t_stack **a, int size, int near, int c);
void		go_high(t_stack **a, t_stack**b, int move, int near);
void		rock_bottom(t_stack **a, t_stack **b, int move, int near);
char		**ft_split(char const *s, char c);

#endif