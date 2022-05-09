/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_hit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:37:22 by sfarhan           #+#    #+#             */
/*   Updated: 2022/05/09 14:38:07 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stack **a, t_stack **b, int c)
{
	swap(a, 0);
	swap(b, 0);
	if (c == 1)
		printf ("ss\n");
}

void	rr(t_stack **a, t_stack **b, int c)
{
	rotate(a, 0);
	rotate(b, 0);
	if (c == 1)
		printf ("rr\n");
}

void	rrr(t_stack **a, t_stack **b, int c)
{
	r_rotate(a, 0);
	r_rotate(b, 0);
	if (c == 1)
		printf ("rrr\n");
}
