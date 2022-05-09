/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:18:26 by sfarhan           #+#    #+#             */
/*   Updated: 2022/05/09 14:45:33 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	if (ac == 1)
		exit(0);
	if (check(av, ac) == 0)
	{
		printf ("Error\n");
		return (0);
	}
	a = NULL;
	b = NULL;
	tab_to_ll(av, ac, &a);
	if (sorted(&a) != 1)
	{
		printf ("Its already sorted\n");
		return (0);
	}
	big_sort(&a, &b);
	return (0);
}
