/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <ymarival@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:00:45 by ymarival          #+#    #+#             */
/*   Updated: 2023/02/14 16:09:46 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*Cette fonction concatène deux chaînes d'entrée avec un espace
entre elles et renvoie un pointeur vers la nouvelle chaîne résultante.
Il utilise mallocpour allouer de la mémoire à la nouvelle chaîne et libère
la mémoire associée à l'une des entrées si elle n'est pas nulle.*/
char	*ft_strjoin(char *str_main, char *str_copy)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	i = -1;
	j = -1;
	len = ft_strlen(str_main) + ft_strlen(str_copy);
	str = malloc(len + 2);
	if (!str)
		return (0);
	while (str_main[++i])
			str[i] = str_main[i];
	while (str_copy[++j])
		str[i++] = str_copy[j];
		str[i] = ' ';
		str[++i] = '\0';
	if (str_main)
		free(str_main);
	return (str);
}

/*ette fonction vérifie si un tableau d'entiers est trié par ordre croissant.*/
int	is_sorted(int *arr, int len)
{
	int	i;

	i = 0;
	if (len == 1 || len == 0)
		return (1);
	while (i < len - 1)
	{
		if (arr[i] > arr[i + 1])
			return (0);
		i++;
	}
	return (1);
}
