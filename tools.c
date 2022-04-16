/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:23:49 by sfarhan           #+#    #+#             */
/*   Updated: 2022/04/14 03:13:05 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	tab_to_ll(char **av, int ac, t_stack **a)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		ft_lstadd_back(a, ft_lstnew(atoi(av[i])));
		i++;
	}
}

void	print_ll(t_stack **stack)
{
	t_stack	*tmp;

	tmp = (*stack);
	while (tmp)
	{
		printf("%d\n", tmp->data);
		tmp = tmp->next;
	}
}

t_stack	*pop(t_stack *head)
{
	t_stack	*temp;

	temp = head;
	if (head == NULL)
		return (NULL);
	// Move the head pointer to the next t_stack
	head = head->next;
	free (temp);
	return (head);
}

t_stack	*pop_last(t_stack *head)
{
	t_stack	*second_last;

	if (head == NULL)
		return (NULL);
	if (head->next == NULL)
	{
		free (head);
		return (NULL);
	}
	// Find the second last t_stack
	second_last = head;
	while (second_last->next->next != NULL)
		second_last = second_last->next;
	// Delete last t_stack
	free (second_last->next);
	// Change next of second last
	second_last->next = NULL;
	return (head);
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
