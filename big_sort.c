/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:03:19 by sfarhan           #+#    #+#             */
/*   Updated: 2022/05/11 19:45:41 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	last_piece(t_stack **a)
{
	int	size;
	int	max;

	size = ft_lstsize(*a);
	max = find_max(a, 1);
	if (max <= size / 2)
	{
		while (max-- >= 1)
			rotate(a, 1);
	}
	else
	{
		while (max++ < size)
			r_rotate(a, 1);
	}
}

void	better_move(t_stack **a, int size, int near, int c)
{
	size = ft_lstsize(*a);
	if (near < 1)
		return ;
	if (near <= size / 2)
	{
		while (near-- > 1)
			rotate(a, c);
	}
	else
	{
		while (near++ <= size)
			r_rotate(a, c);
	}
}

int	nearest(t_stack **a, int num)
{
	int		comparor;
	int		near;
	int		index;
	int		i;
	t_stack	*tmp;

	index = 0;
	comparor = INT_MAX;
	tmp = *a;
	while (tmp)
	{
		i = 0;
		if (num < tmp->data)
		{
			i = tmp->data - num;
			if (comparor > i)
			{
				comparor = i;
				near = tmp->data;
			}
		}
		tmp = tmp->next;
	}
	index = get_index(a, near);
	return (index);
}

void	sorting(t_stack **a, t_stack **b, int size)
{
	int	move;
	int	near;
	int	lent;

	move = 0;
	near = 0;
	lent = ft_lstsize(*b);
	while (lent--)
	{
		size = ft_lstsize(*a);
		cmd_counter(a, b);
		move = find_min_cmd(b, 0);
		near = find_min_cmd(b, 1);
		short_cut(a, b, move, near);
		push(b, a, 1);
	}
	last_piece(a);
}

void	big_sort(t_stack **a, t_stack **b)
{
	int		max;
	int		min;
	int		size;
	t_stack	*tmp;
	int		i;

	i = 1;
	tmp = (*a);
	size = ft_lstsize(*a);
	max = find_max(a, 1);
	min = find_min(a);
	while (tmp && i <= size)
	{
		if (i != min && i != max)
			push(a, b, 2);
		else
			rotate(a, 1);
		i++;
		tmp = tmp->next;
	}
	sorting(a, b, size);
}
