/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_hit_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:37:22 by sfarhan           #+#    #+#             */
/*   Updated: 2022/05/12 18:03:58 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ss(t_stack **a, t_stack **b, int c)
{
	swap(a, 0);
	swap(b, 0);
	if (c == 1)
		write (1, "ss\n", 3);
}

void	rr(t_stack **a, t_stack **b, int c)
{
	rotate(a, 0);
	rotate(b, 0);
	if (c == 1)
		write (1, "rr\n", 3);
}

void	rrr(t_stack **a, t_stack **b, int c)
{
	r_rotate(a, 0);
	r_rotate(b, 0);
	if (c == 1)
		write (1, "rrr\n", 4);
}

void	done_or_not(t_stack **a, t_stack **b)
{
	if (sorted(a) == 0 && ft_lstsize(*b) == 0)
		write (1, "OK\n", 3);
	else
		write (1, "KO\n", 3);
}
