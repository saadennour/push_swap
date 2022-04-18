/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:43:23 by sfarhan           #+#    #+#             */
/*   Updated: 2022/04/17 21:54:51 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack, int c)
{
	int		tmp;

	if (!*stack)
		return ;
	tmp = (*stack)->data;
	(*stack)->data = ((*stack)->next)->data;
	((*stack)->next)->data = tmp;
	if (c == 1)
		printf ("sa\n");
	else if (c == 2)
		printf ("sb\n");
}

void	ss(t_stack **a, t_stack **b)
{
	swap(a, 0);
	swap(b, 0);
	printf ("ss\n");
}

void	push(t_stack **first, t_stack **sec, int c)
{
	int	tmp;

	if (!*first)
		return ;
	tmp = (*first)->data;
	ft_lstadd_front(sec, ft_lstnew(tmp));
	*first = pop(*first);
	if (c == 1)
		printf ("pa\n");
	else if (c == 2)
		printf ("pb\n");
}

void	rotate(t_stack **stack, int c)
{
	int	tmp;

	if (!*stack)
		return ;
	tmp = (*stack)->data;
	ft_lstadd_back(stack, ft_lstnew(tmp));
	*stack = pop(*stack);
	if (c == 1)
		printf ("ra\n");
	else if (c == 2)
		printf ("rb\n");
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a, 0);
	rotate(b, 0);
	printf ("rr\n");
}

void	r_rotate(t_stack **stack, int c)
{
	int	tmp;

	if (!*stack)
		return ;
	tmp = (ft_lstlast(*stack))->data;
	ft_lstadd_front(stack, ft_lstnew(tmp));
	*stack = pop_last(*stack);
	if (c == 1)
		printf ("rra\n");
	else if (c == 2)
		printf ("rrb\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	r_rotate(a, 0);
	r_rotate(b, 0);
	printf ("rrr\n");
}
