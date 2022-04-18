/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:03:19 by sfarhan           #+#    #+#             */
/*   Updated: 2022/04/18 00:41:00 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*first_digit(int nbr)
{
	int		i;
	char	*n = NULL;

	i = 0;
	ft_itoa(nbr);
	while (n[i])
	{
		i++;
	}
	i--;
	return (n);
}

void	big_sort(t_stack **a, t_stack **b, char **av, int ac)
{
	int	max;

	max = find_max(a);
}