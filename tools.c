/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:23:49 by sfarhan           #+#    #+#             */
/*   Updated: 2022/05/09 15:02:45 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	second_last = head;
	while (second_last->next->next != NULL)
		second_last = second_last->next;
	free (second_last->next);
	second_last->next = NULL;
	return (head);
}
