/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:48:46 by sfarhan           #+#    #+#             */
/*   Updated: 2022/05/09 14:48:49 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack **a)
{
	int	max;
	int	min;

	max = find_max(a, 1);
	min = find_min(a);
	if (min == 2 && max == 3)
		swap(a, 1);
	else if (min == 3 && max == 2)
		r_rotate(a, 1);
	else if (min == 1 && max == 2)
	{
		r_rotate(a, 1);
		swap(a, 1);
	}
	else if (min == 2 && max == 1)
		rotate(a, 1);
	else if (min == 3 && max == 1)
	{
		rotate(a, 1);
		swap(a, 1);
	}
}

void	sort_4(t_stack **a, t_stack **b)
{
	int	smallest;

	smallest = find_min(a);
	if (smallest <= 2)
	{
		while (smallest-- > 1)
			rotate(a, 1);
	}
	else
	{
		while (smallest++ <= 4)
			r_rotate(a, 1);
	}
	push(a, b, 2);
	sort_3(a);
	push(b, a, 1);
}

void	sort_5(t_stack **a, t_stack **b)
{
	int	smallest;

	smallest = find_min(a);
	if (smallest <= 3)
	{
		while (smallest-- > 1)
			rotate(a, 1);
	}
	else
	{
		while (smallest++ <= 5)
			r_rotate(a, 1);
	}
	push(a, b, 2);
	sort_4(a, b);
	push(b, a, 1);
}
