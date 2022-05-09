/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sidekicks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:18:26 by sfarhan           #+#    #+#             */
/*   Updated: 2022/04/21 02:24:36 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index(t_stack **a, int num)
{
	int		i;
	t_stack	*tmp;

	i = 1;
	tmp = (*a);
	while (tmp)
	{
		if (tmp->data == num)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (0);
}

void	cmd_counter(t_stack **a, t_stack **b)
{
	int		move;
	int		size;
	int		near;
	int		index;
	t_stack	*tmp;

	index = 1;
	tmp = (*b);
	size = ft_lstsize(*b);
	while (tmp)
	{
		near = nearest(a, tmp->data);
		move = accorde(a, near);
		if (index <= size / 2)
			tmp->cmd = move + (index - 1);
		else
			tmp->cmd = move + (size - index + 1);
		tmp->near = near;
		index++;
		tmp = tmp->next;
	}
}

int	accorde(t_stack **a, int near)
{
	int	index;
	int	size;

	index = 0;
	size = ft_lstsize(*a);
	if (near <= size / 2)
	{
		while (near > 1)
		{
			near--;
			index++;
		}
	}
	else
	{
		while (near <= size)
		{
			near++;
			index++;
		}
	}
	return (index);
}

int	find_min_cmd(t_stack **b, int c)
{
	t_stack	*tmp;
	int		min;
	int		near;
	int		index;
	int		moves;

	index = 1;
	moves = 1;
	tmp = (*b);
	near = tmp->near;
	min = tmp->cmd;
	while (tmp)
	{
		if (min > tmp->cmd)
		{
			min = tmp->cmd;
			near = tmp->near;
			moves = index;
		}
		index++;
		tmp = tmp->next;
	}
	if (c == 1)
		return (near);
	return (moves);
}

void	short_cut(t_stack **a, t_stack **b, int move, int near)
{
	int	size1;
	int	size2;

	size1 = ft_lstsize(*a);
	size2 = ft_lstsize(*b);
	if (near <= size1 / 2 && move <= size2 / 2)
		go_high(a, b, move, near);
	else if (near > size1 / 2 && move > size2 / 2)
		rock_bottom(a, b, move, near);
	else
	{
		better_move(b, size2, move, 2);
		better_move(a, size1, near, 1);
	}
}
