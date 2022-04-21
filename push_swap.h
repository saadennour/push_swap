/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 00:23:28 by sfarhan           #+#    #+#             */
/*   Updated: 2022/04/21 02:17:06 by sfarhan          ###   ########.fr       */
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
void		ss(t_stack **a, t_stack **b);
void		push(t_stack **first, t_stack **sec, int c);
void		rotate(t_stack **stack, int c);
void		rr(t_stack **a, t_stack **b);
void		r_rotate(t_stack **stack, int c);
void		rrr(t_stack **a, t_stack **b);
void		sort_3(t_stack **a);
void		sort_4(t_stack **a, t_stack **b, int ac);
void		sort_5(t_stack **a, t_stack **b, int ac);
int			find_max(t_stack **a);
int			find_min(t_stack **a);
int			sorted(t_stack **a, int ac);
char		*ft_itoa(int n);
char		*first_digit(int nbr);
void		big_sort(t_stack **a, t_stack **b, int ac);

#endif