/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gods_hand.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:14:29 by sfarhan           #+#    #+#             */
/*   Updated: 2022/04/16 23:38:23 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void god_caller(char *s, t_stack *a, t_stack *b)
// {
// }
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

int	sorted(t_stack **a, int ac)
{
	t_stack *tmp;
	int min;
	int i;

	tmp = (*a);
	min = tmp->data;
	i = 0;
	while (tmp && min <= tmp->data)
	{
		i++;
		tmp = tmp->next;
	}
	printf ("i = %d\n", i);
	if (i == ac - 1)
		return (1);
	return (0);
}