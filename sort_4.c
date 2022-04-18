/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:12:44 by sfarhan           #+#    #+#             */
/*   Updated: 2022/04/17 21:59:00 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sidekick(t_stack **a, t_stack **b, int smallest)
{
	if (smallest == 3)
	{
		rotate(a, 1);
		swap(a, 1);
		push(a, b, 2);
		sort_3(a);
		push(b, a, 1);
	}
	else if (smallest == 4)
	{
		r_rotate(a, 1);
		push(a, b, 2);
		sort_3(a);
		push(b, a, 1);
	}
}

void	sort_4(t_stack **a, t_stack **b, int ac)
{
	int	smallest;

	smallest = find_min(a);
	if (sorted(a, ac) == 1)
		return ;
	else
	{
		if (smallest == 1)
		{
			push(a, b, 2);
			sort_3(a);
			push(b, a, 1);
		}
		else if (smallest == 2)
		{
			swap(a, 1);
			push(a, b, 2);
			sort_3(a);
			push(b, a, 1);
		}
		else if (smallest == 3 || smallest == 4)
			sidekick(a, b, smallest);
	}
}
