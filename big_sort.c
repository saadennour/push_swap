/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:03:19 by sfarhan           #+#    #+#             */
/*   Updated: 2022/04/21 00:55:39 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*first_digit(int nbr)
{
	int		i;
	char	*n = NULL;

	i = 0;
	n = ft_itoa(nbr);
	while (n[i])
		i++;
	i--;
	printf ("%c\n", n[i]);
	return (n);
}

void	better_move(t_stack **a, int ac, int data)
{
	int	half;
	static int	size;

	size++;
	half = (ac - size) / 2;
	//printf ("\n size = %d && data = %d && half == %d\n", size, data, half);
	if (data == 1)
		return ;
	if (data <= half)
	{
		while (data-- > 1)
			rotate(a, 1);
		return ;
	}
	while (data++ <= ac - size)
		r_rotate(a, 1);
	return ;
}

void	big_sort(t_stack **a, t_stack **b, int ac)
{
	int	max;
	int	i;

	i = 0;
	print_ll(a);
	printf ("\n\n\n");
	while (i++ < ac - 1)
	{
		max = find_min(a);
		better_move(a, ac, max);
		push (a, b, 2);
	}
	while (i--)
		push (b, a, 1);
	printf ("\n\n");
	print_ll(a);
	printf ("\n\n");
	//print_ll(b);
}
