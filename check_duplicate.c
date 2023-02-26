/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <ymarival@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:35:42 by ymarival          #+#    #+#             */
/*   Updated: 2023/02/03 19:03:27 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Cette fonction vérifie les valeurs en double dans un tableau
d'entiers "a" de longueur "len".
Si deux éléments ont la même valeur, 
la fonction appellera la fonction "error()".*/
void	check_duplicate(int *a, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (a[i] == a[j])
				error();
				j++;
		}
		i++;
	}
}
