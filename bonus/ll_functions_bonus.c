/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ll_functions_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:27:57 by sfarhan           #+#    #+#             */
/*   Updated: 2022/05/11 20:02:07 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	new->next = NULL;
	if (!lst)
		return ;
	if (!*lst)
		*lst = new;
	else
		(ft_lstlast(*lst))->next = new;
}

t_stack	*ft_lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	new->next = *lst;
	*lst = new;
}

int	ft_lstsize(t_stack *lst)
{
	int	i;

	i = 0;
	if (lst)
	{
		while (lst != NULL)
		{
			lst = lst->next;
			i++;
		}
	}
	return (i);
}

t_stack	*ft_lstnew(int data)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!(new))
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}
