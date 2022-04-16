/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 02:57:53 by sfarhan           #+#    #+#             */
/*   Updated: 2022/04/15 21:37:54 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_MAX(t_stack **a)
{
	int max;
	t_stack *tmp;
	int index;
	int i;

	tmp = (*a);
	max = tmp->data;
	index = 1;
	i = 1;
	while (tmp)
	{
		if(max < tmp->data)
		{
			max = tmp->data;
			index = i;
		}
		i++;
		tmp = tmp->next;
	}
	return (index);
}

int	find_MIN(t_stack **a)
{
	int min;
	t_stack *tmp;
	int index;
	int i;

	tmp = (*a);
	min = tmp->data;
	index = 1;
	i = 1;
	while (tmp)
	{
		if(min > tmp->data)
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
	int	MAX;
	int	MIN;
	
	MAX = find_MAX(a);
	MIN = find_MIN(a);
	if (MIN == 2 && MAX == 3)
		swap(a, 1);
	else if (MIN == 3 && MAX == 2)
		r_rotate(a, 1);
	else if (MIN == 1 && MAX == 2)
	{
		r_rotate(a, 1);
		swap(a, 1);
	}
	else if (MIN == 2 && MAX == 1)
		rotate(a, 1);
	else if (MIN == 3 && MAX == 1)
	{
		rotate(a, 1);
		swap(a, 1);
	}
}
