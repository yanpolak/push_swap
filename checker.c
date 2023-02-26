/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <ymarival@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:36:57 by ymarival          #+#    #+#             */
/*   Updated: 2023/02/03 19:03:48 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/* la fonction vérifie si la chaîne représente 
une expression arithmétique valide
dans laquelle les nombres sont séparés par des espaces et éventuellement précédés
d'un '+' ou d'un '-'.*/
void	checker(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == ' ')
		{
			i++;
		}
		else if ((i == 0 || str[i - 1] == ' ')
			&& (str[i] == '+' || str[i] == '-')
			&& (str[i + 1] >= '0' && str[i + 1] <= '9'))
		{
			i++;
		}
		else
		{
			error();
		}
	}
}
