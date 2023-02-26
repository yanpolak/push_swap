/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <ymarival@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:53:38 by ymarival          #+#    #+#             */
/*   Updated: 2023/02/03 22:01:18 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_rb(t_list **list, int i)
{
	t_list	*head;
	t_list	*tail;

	head = *list;
	tail = *list;
	if (head && head->next)
	{
		*list = head->next;
		while (tail->next)
			tail = tail->next;
		tail->next = head;
		tail->next->next = NULL;
		if (i == 1)
			write(1, "ra\n", 3);
		else if (i == 2)
			write(1, "rb\n", 3);
	}
}

void	rr(t_list **list_a, t_list **list_b)
{
	ra_rb(list_a, 3);
	ra_rb(list_b, 3);
	write(1, "rr\n", 3);
}

void	rra_rrb(t_list **list, int i)
{
	t_list	*head;
	t_list	*tail;
	t_list	*temp;

	head = *list;
	tail = *list;
	temp = NULL;
	if (head)
	{
		while (tail->next)
		{
			temp = tail;
			tail = tail->next;
		}
		temp->next = NULL;
		tail->next = head;
		*list = tail;
		if (i == 1)
			write(1, "rra\n", 4);
		else if (i == 2)
			write(1, "rrb\n", 4);
	}
}

void	rrr(t_list **list_a, t_list **list_b)
{
	rra_rrb(list_a, 3);
	rra_rrb(list_b, 3);
	write(1, "rrr\n", 4);
}
