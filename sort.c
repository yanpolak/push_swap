/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <ymarival@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:56:43 by ymarival          #+#    #+#             */
/*   Updated: 2023/02/02 10:57:18 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_list **stack_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_a)->index;
	b = (*stack_a)->next->index;
	c = (*stack_a)->next->next->index;
	if (a > b && a < c)
		sa(stack_a);
	else if (a > b && b > c)
	{
		sa(stack_a);
		rra_rrb(stack_a, 1);
	}
	else if (a > b && b < c)
		ra_rb(stack_a, 1);
	else if (a < b && b > c && a < c)
	{
		sa(stack_a);
		ra_rb(stack_a, 1);
	}
	else if (a < b && b > c)
		rra_rrb(stack_a, 1);
}

void	sort_4(t_list **stack_a, t_list **stack_b)
{
	int	max_index;

	max_index = max_list(stack_a);
	if (max_index == 3)
		rra_rrb(stack_a, 1);
	else if (max_index == 2)
	{
		rra_rrb(stack_a, 1);
		rra_rrb(stack_a, 1);
	}
	else
		if (max_index == 1)
			ra_rb(stack_a, 1);
	pb(stack_a, stack_b);
	sort_3(stack_a);
	pa(stack_a, stack_b);
	ra_rb(stack_a, 1);
}

void	sort_5(t_list **stack_a, t_list **stack_b)
{
	int	max_index;

	max_index = max_list(stack_a);
	if (max_index == 4)
		rra_rrb(stack_a, 1);
	else if (max_index == 3)
	{
		rra_rrb(stack_a, 1);
		rra_rrb(stack_a, 1);
	}
	else if (max_index == 2)
	{
		ra_rb(stack_a, 1);
		ra_rb(stack_a, 1);
	}
	else if (max_index == 1)
		ra_rb(stack_a, 1);
	pb(stack_a, stack_b);
	sort_4(stack_a, stack_b);
	pa(stack_a, stack_b);
	ra_rb(stack_a, 1);
}

void	sort_6(t_list **stack_a, t_list **stack_b, int n)
{
	int	count;

	count = 0;
	while ((*stack_a) != NULL)
	{
		if ((*stack_a)->index <= count)
		{
			pb(stack_a, stack_b);
			ra_rb(stack_b, 2);
			count++;
		}
		else if ((*stack_a)->index <= count + n)
		{
			pb(stack_a, stack_b);
			count++;
		}
		else
		{
			ra_rb(stack_a, 1);
		}
	}
}

void	sort_2(t_list **stack_a)
{
	if ((*stack_a)->index > (*stack_a)->next->index)
	{
		sa(stack_a);
	}
}
