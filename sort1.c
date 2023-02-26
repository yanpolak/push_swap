/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <ymarival@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:58:11 by ymarival          #+#    #+#             */
/*   Updated: 2023/02/05 13:33:58 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*La fonction "fill_a" transfère les éléments d'une liste chaînée,
"stack_b", vers une autre liste chaînée, "stack_a", dans un ordre
spécifique déterminé par la plus grande valeur "index" d'un nœud dans "stack_b".
Les fonctions "pa", "ra_rb" et "rra_rrb" sont utilisées
pour réaliser cet ordre.*/
void	fill_a(t_list **stack_a, t_list **stack_b, int len)
{
	int	max;

	max = 0;
	while (*stack_b)
	{
		max = max_list(stack_b);
		if (max <= len / 2)
		{
			while (max-- >= 1)
				ra_rb(stack_b, 2);
			pa(stack_a, stack_b);
			len--;
		}
		else if (max > len / 2)
		{
			while (len - max)
			{
				rra_rrb(stack_b, 2);
				max++;
			}
			pa(stack_a, stack_b);
			len--;
		}
	}
}

/*La fonction "max_list" prend une liste chaînée de structures 
de données "t_list"
comme entrée et sort l'index du nœud dans la liste
chaînée qui a la plus grande
valeur pour le champ "index".  En d'autres termes, 
il trouve le nœud dans la liste
avec la valeur la plus élevée pour le champ "index" et renvoie 
sa position dans la liste.*/
int	max_list(t_list **list)
{
	int		max;
	int		i;
	int		max_index;
	t_list	*node;

	i = 0;
	max_index = 0;
	node = *list;
	max = node->index;
	node = node->next;
	while (node != NULL)
	{
		if (node->index > max)
		{
			max = node->index;
			max_index = ++i;
			node = node->next;
		}
		else
		{
			node = node->next;
			i++;
		}
	}
	return (max_index);
}

/*La fonction "sort" trie une liste chaînée "stack_a" d'entiers,
en utilisant différentes fonctions de tri basées sur la longueur de la liste,
"len".La stratégie de tri utilisée est déterminée par la longueur de "stack_a".
Le but de la fonction "sort" est de trier les éléments dans
 "stack_a" de manière efficace.*/
void	sort(t_list **stack_a, t_list **stack_b, int len)
{
	if (len == 2)
		sort_2(stack_a);
	else if (len == 3)
		sort_3(stack_a);
	else if (len == 4)
		sort_4(stack_a, stack_b);
	else if (len == 5)
		sort_5(stack_a, stack_b);
	else if (len >= 6 && len <= 100)
	{
		sort_6(stack_a, stack_b, 15);
		fill_a(stack_a, stack_b, len);
	}
	else if (len >= 101 && len <= 500)
	{
		sort_6(stack_a, stack_b, 30);
		fill_a(stack_a, stack_b, len);
	}
	else if (len >= 501)
	{
		sort_6(stack_a, stack_b, 45);
		fill_a(stack_a, stack_b, len);
	}
}
