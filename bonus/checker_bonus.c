/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 19:31:14 by sfarhan           #+#    #+#             */
/*   Updated: 2022/05/13 14:58:56 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static void	free_it_all(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0' ) && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

static int	exist(char *instr)
{
	int		i;
	char	**moves;

	i = 0;
	moves = ft_split("sa\n sb\n ss\n ra\n rb\n rr\n rra\n rrb\n rrr\n pa\n pb\n", ' ');
	while (moves[i])
	{
		if (ft_strcmp(instr, moves[i]) == 0)
		{
			free_it_all(moves);
			return (1);
		}
		i++;
	}
	free_it_all(moves);
	return (0);
}

static void	sort_it(t_stack **a, t_stack **b, char *instr)
{
	if (ft_strcmp(instr, "sa\n") == 0)
		swap(a, 0);
	else if (ft_strcmp(instr, "sb\n") == 0)
		swap(b, 0);
	else if (ft_strcmp(instr, "ss\n") == 0)
		ss(a, b, 0);
	else if (ft_strcmp(instr, "ra\n") == 0)
		rotate(a, 0);
	else if (ft_strcmp(instr, "rb\n") == 0)
		rotate(b, 0);
	else if (ft_strcmp(instr, "rr\n") == 0)
		rr(a, b, 0);
	else if (ft_strcmp(instr, "rra\n") == 0)
		r_rotate(a, 0);
	else if (ft_strcmp(instr, "rrb\n") == 0)
		r_rotate(b, 0);
	else if (ft_strcmp(instr, "rrr\n") == 0)
		rrr(a, b, 0);
	else if (ft_strcmp(instr, "pa\n") == 0)
		push(b, a, 0);
	else if (ft_strcmp(instr, "pb\n") == 0)
		push(a, b, 0);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	*instr;

	if (ac >= 2)
	{
		checker_errors(ac, av);
		tab_to_ll(av, ac, &a);
		instr = get_next_line(0, 3);
		while (instr != NULL)
		{
			if (exist(instr) == 0)
			{
				write (1, "Error\n", 6);
				return (0);
			}
			sort_it(&a, &b, instr);
			free(instr);
			instr = get_next_line(0, 3);
		}
		done_or_not(&a, &b);
	}
	return (0);
}
