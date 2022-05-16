/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:54:00 by sfarhan           #+#    #+#             */
/*   Updated: 2022/05/12 18:04:02 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	check(char **av, int ac)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		if (av[i][0] == '-')
			j++;
		while (av[i][j])
		{
			if (ft_isdigit(av[i][j]) == 0)
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	if (duplicated(av, ac) == 0)
		return (0);
	return (1);
}

int	duplicated(char **av, int ac)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
				return (0);
			j++;
		}
		if (ft_atoi(av[i]) < INT_MIN || ft_atoi(av[i]) > INT_MAX)
			return (0);
		i++;
	}
	return (1);
}

void	checker_errors(int ac, char **av)
{
	if (check(av, ac) == 0)
	{
		write (1, "Error\n", 6);
		exit (0);
	}
}
