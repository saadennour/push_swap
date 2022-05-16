/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:43:23 by sfarhan           #+#    #+#             */
/*   Updated: 2022/05/11 20:02:01 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	swap(t_stack **stack, int c)
{
	int		tmp;

	if (!*stack)
		return ;
	tmp = (*stack)->data;
	(*stack)->data = ((*stack)->next)->data;
	((*stack)->next)->data = tmp;
	if (c == 1)
		write (1, "sa\n", 3);
	else if (c == 2)
		write (1, "sb\n", 3);
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
		write (1, "pa\n", 3);
	else if (c == 2)
		write (1, "pb\n", 3);
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
		write (1, "ra\n", 3);
	else if (c == 2)
		write (1, "rb\n", 3);
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
		write (1, "rra\n", 4);
	else if (c == 2)
		write (1, "rrb\n", 4);
}
