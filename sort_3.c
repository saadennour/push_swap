/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 02:57:53 by sfarhan           #+#    #+#             */
/*   Updated: 2022/04/17 22:00:11 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max(t_stack **a)
{
	int		max;
	t_stack	*tmp;
	int		index;
	int		i;

	tmp = (*a);
	max = tmp->data;
	index = 1;
	i = 1;
	while (tmp)
	{
		if (max < tmp->data)
		{
			max = tmp->data;
			index = i;
		}
		i++;
		tmp = tmp->next;
	}
	return (index);
}

int	find_min(t_stack **a)
{
	int		min;
	t_stack	*tmp;
	int		index;
	int		i;

	tmp = (*a);
	min = tmp->data;
	index = 1;
	i = 1;
	while (tmp)
	{
		if (min > tmp->data)
		{
			min = tmp->data;
			index = i;
		}
		i++;
		tmp = tmp->next;
	}
	return (index);
}

void	sort_3(t_stack **a)
{
	int	max;
	int	min;

	max = find_max(a);
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
