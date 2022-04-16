/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:12:44 by sfarhan           #+#    #+#             */
/*   Updated: 2022/04/15 21:37:19 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_4(t_stack **a, t_stack **b)
{
	int	Smallest;

	Smallest = find_MIN(a);
	if (Smallest == 1)
	{
		push(a, b, 2);
		sort_3(a);
		push(b, a, 1);
	}
	else if (Smallest == 2)
	{
		swap(a, 1);
		push(a, b, 2);
		sort_3(a);
		push(b, a, 1);
	}
	else if (Smallest == 3)
	{
		rotate(a, 1);
		swap(a, 1);
		push(a, b, 2);
		sort_3(a);
		push(b, a, 1);
	}
	else if (Smallest == 4)
	{
		r_rotate(a, 1);
		push(a, b, 2);
		sort_3(a);
		push(b, a, 1);
	}
}
