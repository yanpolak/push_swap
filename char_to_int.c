/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_to_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <ymarival@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:33:39 by ymarival          #+#    #+#             */
/*   Updated: 2023/02/03 18:49:23 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*La fonction char_to_intest utilisé pour convertir un tableau de caractères
à deux dimensions donné map de longueur len
dans un tableau d'entiers.
a fonction utilise ft_atoi pour convertir chaque chaîne en un entier
et le stocker dans le arr déployer.
Enfin, le dernier élément de arr est réglé sur '\0'
et la fonction retourne le arr déployer.*/
int	*char_to_int(int len, char **map)
{	
	int	j;
	int	i;
	int	*arr;

	i = 0;
	arr = malloc(sizeof(int) * len + 1);
	while (map[i])
	{
		j = 0;
		while (map[i][j] == '0')
			j++;
		if (strlen(map[i] + j) > 16)
			error();
		arr[i] = ft_atoi(map[i] + j);
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
