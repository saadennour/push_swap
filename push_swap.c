/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:18:26 by sfarhan           #+#    #+#             */
/*   Updated: 2022/05/12 21:14:02 by sfarhan          ###   ########.fr       */
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
		write (1, "Error\n", 6);
		return (0);
	}
	tab_to_ll(av, ac, &a);
	if (sorted(&a) != 1)
		write (1, "Its already sorted\n", 20);
	else if ((ft_lstsize(a) == 2 || ft_lstsize(a) == 3) && sorted(&a) == 1)
		sort_3(&a);
	else if (ft_lstsize(a) == 4 && sorted(&a) == 1)
		sort_4(&a, &b);
	else if (ft_lstsize(a) == 5 && sorted(&a) == 1)
		sort_5(&a, &b);
	else if (ft_lstsize(a) > 5 && sorted(&a) == 1)
		big_sort(&a, &b);
	return (0);
}
