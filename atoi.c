/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <ymarival@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:31:56 by ymarival          #+#    #+#             */
/*   Updated: 2023/02/03 18:29:18 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*La fonction ft_atoiest utilisé pour convertir une chaîne en un entier.
Il prend un pointeur vers une chaîne en entrée et renvoie
l'entier équivalent de la chaîne*/
int	ft_atoi( char *str)
{
	int			i;
	int			n;
	long int	result;

	result = 0;
	n = 1;
	i = 0;
	if (!str)
		return (0);
	if (str[i] == '-')
	{
		n = n * -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (result * n > 2147483647 || result * n < -2147483648)
		error();
	return (result * n);
}
