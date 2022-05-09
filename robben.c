/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   robben.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:49:46 by sfarhan           #+#    #+#             */
/*   Updated: 2022/05/09 14:50:29 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max(t_stack **a, int need)
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
	if (need == 0)
		return (max);
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

void	go_high(t_stack **a, t_stack**b, int move, int near)
{
	int	size1;
	int	size2;

	size1 = ft_lstsize(*a);
	size2 = ft_lstsize(*b);
	if (near < move)
	{
		while (near-- > 1)
		{
			rr(a, b, 1);
			move--;
		}
		better_move(b, size2, move, 2);
	}
	else
	{
		while (move-- > 1)
		{
			rr(a, b, 1);
			near--;
		}
		better_move(a, size1, near, 1);
	}
}

void	rock_bottom(t_stack **a, t_stack **b, int move, int near)
{
	int	diff1;
	int	diff2;

	diff1 = ft_lstsize(*a) - near;
	diff2 = ft_lstsize(*b) - move;
	if (diff1 < diff2)
	{
		while (diff1-- >= 0)
		{
			rrr(a, b, 1);
			move++;
		}
		better_move(b, ft_lstsize(*b), move, 2);
	}
	else
	{
		while (diff2-- >= 0)
		{
			rrr(a, b, 1);
			near++;
		}
		better_move(a, ft_lstsize(*a), near, 1);
	}
}
