/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_arr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <ymarival@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:40:45 by ymarival          #+#    #+#             */
/*   Updated: 2023/02/03 20:12:36 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* la fonction ft_first_join prend une chaîne en entrée
et renvoie une nouvelle chaîne qui est une copie de la chaîne
d'origine avec un espace ajouté à la fin*/
char	*ft_first_join(char *str)
{
	int		len;
	char	*arr;
	int		j;

	j = 0;
	len = ft_strlen(str);
	arr = malloc(len + 2);
	if (!arr)
	{
		free(arr);
		return (NULL);
	}
	while (str[j])
	{
		arr[j] = str[j];
		j++;
	}
	arr[len] = ' ';
	arr[len + 1] = '\0';
	return (arr);
}

/*La fonction ft_join_str prend un tableau de chaînes
str et concatène toutes les chaînes en une seule chaîne.*/
char	*ft_join_str(char **str)
{
	int		i;
	char	*arr;

	i = 1;
	arr = ft_first_join(str[i]);
	i++;
	while (str[i])
	{
		arr = ft_strjoin(arr, str[i]);
		i++;
	}
	return (arr);
}
