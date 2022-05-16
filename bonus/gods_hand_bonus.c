/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gods_hand_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:14:29 by sfarhan           #+#    #+#             */
/*   Updated: 2022/05/11 20:01:56 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

static int	whitespace(char c)
{
	if (c == '\n' || c == '\v' || c == '\f' || c == '\t' || c == '\r')
		return (1);
	if (c == ' ')
		return (1);
	return (0);
}

long long	ft_atoi(const char *str)
{
	int			i;
	int			negativity;
	long long	result;

	i = 0;
	negativity = 1;
	result = 0;
	while (whitespace(str[i]))
		i++;
	if (str[i] == '-')
		negativity = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * negativity);
}

int	sorted(t_stack **a)
{
	t_stack	*tmp;
	int		size;

	tmp = (*a);
	size = ft_lstsize(*a);
	while (size-- > 1)
	{
		if (tmp->data > tmp->next->data)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}
