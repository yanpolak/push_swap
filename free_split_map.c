/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_split_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <ymarival@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:33:35 by ymarival          #+#    #+#             */
/*   Updated: 2023/02/04 17:35:59 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split_map(char **map, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free(map[i]);
		i++;
	}
	free(map);
}
