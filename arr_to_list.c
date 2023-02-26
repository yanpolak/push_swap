/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_to_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <ymarival@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:29:13 by ymarival          #+#    #+#             */
/*   Updated: 2023/02/03 18:29:38 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*Cette fonction "index_list" est utilisée pour définir les valeurs d'index
d'une liste chaînée, "t_list".  La liste chaînée est transmise sous la forme
d'un double pointeur, "list", et le nombre d'éléments dans la liste chaînée
est transmis sous la forme d'un entier, "len".*/
void	index_list(t_list **list, int len)
{
	t_list	*node;
	t_list	*min;
	int		i;

	i = 0;
	node = (*list)->next;
	min = *list;
	while (i < len)
	{
		while (node != NULL)
		{
			if (min->data > node->data && node->index == -1)
				min = node;
			node = node->next;
		}
		min->index = i;
		min = *list;
		node = *list;
		i++;
		while (i < len && min->index != -1)
			min = min->next;
	}
}

/*Cette fonction prend un double pointeur vers une liste chaînée
et libère chaque nœud de la liste*/
void	free_list(t_list **stack)
{
	t_list	*next;

	while ((*stack) != NULL)
	{
		next = (*stack)->next;
		free(*stack);
		(*stack) = next;
	}
}

/*Le rôle de cette fonction est de convertir un tableau d'entiers
en une liste chaînée de t_listéléments.*/
t_list	*arr_to_list_helper(int *a, int len)
{
	t_list	*node;
	t_list	*curr;
	int		i;

	node = malloc(sizeof(t_list));
	curr = node;
	i = 0;
	while (i < len)
	{
		curr->data = a[i];
		curr->index = -1;
		if (i + 1 < len)
		{
			curr->next = malloc(sizeof(t_list));
			curr = curr->next;
		}
		else
		{
			curr->next = NULL;
			break ;
		}
		i++;
	}
	return (node);
}

/*Cette fonction arr_to_list trie un tableau d'entiers a
de longueur len et libère la mémoire associée.*/
void	arr_to_list(int *a, int len)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = arr_to_list_helper(a, len);
	stack_b = NULL;
	index_list(&stack_a, len);
	sort(&stack_a, &stack_b, len);
	free_list(&stack_a);
	free_list(&stack_b);
}
