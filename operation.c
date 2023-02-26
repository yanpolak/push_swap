/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <ymarival@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:52:02 by ymarival          #+#    #+#             */
/*   Updated: 2023/02/03 21:43:02 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **list)
{
	t_list	*temp;

	if (*list && (*list)->next)
	{
		temp = *list;
		*list = (*list)->next;
		temp->next = (*list)->next;
		(*list)->next = temp;
		write(1, "sa\n", 3);
	}
}

void	sb(t_list **list)
{
	sa(list);
	write(1, "sb\n", 3);
}

void	ss(t_list **a_list, t_list **b_list)
{
	sa(a_list);
	sb(b_list);
	write(1, "ss\n", 3);
}

void	pa(t_list **a_list, t_list **b_list)
{
	t_list	*temp;

	if (*b_list)
	{
		temp = *b_list;
		*b_list = (*b_list)->next;
		temp->next = *a_list;
		*a_list = temp;
		write(1, "pa\n", 3);
	}
}

void	pb(t_list **a_list, t_list **b_list)
{
	t_list	*temp;

	if (*a_list)
	{
		temp = *a_list;
		*a_list = (*a_list)->next;
		temp->next = *b_list;
		*b_list = temp;
		write(1, "pb\n", 3);
	}
}
