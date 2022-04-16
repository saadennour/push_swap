/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 21:20:55 by sfarhan           #+#    #+#             */
/*   Updated: 2022/04/15 21:37:05 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_5(t_stack **a, t_stack **b)
{
	int	smallest;

	smallest = find_MIN(a);
	if (smallest == 1)
	{
		push(a, b, 2);
		sort_4(a, b);
		push(b, a, 1);
	}
	else if (smallest == 2)
	{
		swap(a, 1);
		push(a, b, 2);
		sort_4(a, b);
		push(b, a, 1);
	}
	else if (smallest == 3)
	{
		rotate(a, 1);
		swap(a, 1);
		push(a, b, 2);
		sort_4(a, b);
		push(b, a, 1);
	}
	else if (smallest == 4)
	{
		r_rotate(a, 1);
		r_rotate(a, 1);
		push(a, b, 2);
		sort_4(a, b);
		push(b, a, 1);
	}
	else if (smallest == 5)
	{
		r_rotate(a, 1);
		push(a, b, 2);
		sort_4(a, b);
		push(b, a, 1);
	}
}