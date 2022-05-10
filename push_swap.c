/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:18:26 by sfarhan           #+#    #+#             */
/*   Updated: 2022/05/10 16:40:34 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (ac <= 1)
		exit(0);
	if (check(av, ac) == 0)
	{
		printf ("Error\n");
		return (0);
	}
	tab_to_ll(av, ac, &a);
	if (sorted(&a) != 1)
		printf ("Its already sorted\n");
	else if (ft_lstsize(a) == 3 && sorted(&a) == 1)
		sort_3(&a);
	else if (ft_lstsize(a) == 4 && sorted(&a) == 1)
		sort_4(&a, &b);
	else if (ft_lstsize(a) == 5 && sorted(&a) == 1)
		sort_5(&a, &b);
	else if (ft_lstsize(a) > 5 && sorted(&a) == 1)
		big_sort(&a, &b);
	return (0);
}
