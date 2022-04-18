/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:18:26 by sfarhan           #+#    #+#             */
/*   Updated: 2022/04/18 00:40:39 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	**n;

	if (ac == 1)
		exit(0);
	if (check(av, ac) == 0)
	{
		printf ("Error\n");
		return (0);
	}
	a = malloc(sizeof(t_stack));
	b = malloc(sizeof(t_stack));
	a = NULL;
	b = NULL;
	tab_to_ll(av, ac, &a);
	// i = sorted(&a, ac);
	// printf ("i = %d\n", i);
	//sort_3(&a);
	//sort_5(&a, &b, ac);
	n = first_digit(2020);
	printf ("%s\n\n", n);
	print_ll(&a);
	printf("***************************\n");
	print_ll(&b);
}
