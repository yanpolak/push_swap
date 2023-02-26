/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrixlength.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <ymarival@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:50:41 by ymarival          #+#    #+#             */
/*   Updated: 2023/02/04 18:26:00 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*cette fonction calcule le nombre de lignes dans le tableau de caractères
à deux dimensions map en comptant le nombre d'éléments
non NULL qu'il contient.*/
int	matrix_length(char **map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		i++;
	}
	return (i);
}
