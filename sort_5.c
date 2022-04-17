/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 21:20:55 by sfarhan           #+#    #+#             */
/*   Updated: 2022/04/16 23:35:52 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sidekick(t_stack **a, t_stack **b, int smallest, int ac)
{
	if (smallest == 3)
	{
		rotate(a, 1);
		swap(a, 1);
		push(a, b, 2);
		sort_4(a, b, ac);
		push(b, a, 1);
	}
	else if (smallest == 4)
	{
		r_rotate(a, 1);
		r_rotate(a, 1);
		push(a, b, 2);
		sort_4(a, b, ac);
		push(b, a, 1);
	}
	else if (smallest == 5)
	{
		r_rotate(a, 1);
		push(a, b, 2);
		sort_4(a, b, ac);
		push(b, a, 1);
	}
}

void	sort_5(t_stack **a, t_stack **b, int ac)
{
	int	smallest;

	smallest = find_MIN(a);
	if (sorted(a, ac) == 1)
		return;
	else
	{
		if (smallest == 1)
		{
			push(a, b, 2);
			sort_4(a, b, ac);
			push(b, a, 1);
		}
		else if (smallest == 2)
		{
			swap(a, 1);
			push(a, b, 2);
			sort_4(a, b, ac);
			push(b, a, 1);
		}
		else
			sidekick(a, b, smallest, ac);
	}
}
