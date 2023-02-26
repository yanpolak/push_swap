/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <ymarival@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:14:57 by ymarival          #+#    #+#             */
/*   Updated: 2023/02/03 16:38:34 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int a_nb, char *str[])
{
	char	*result;
	char	**map;
	int		len;
	int		*a;

	len = 0;
	a = NULL;
	map = NULL;
	result = NULL;
	if (a_nb >= 2)
	{
		result = ft_join_str(str);
		checker(result);
	map = ft_split(result, ' ');
	len = matrix_length(map);
	a = char_to_int(len, map);
		check_duplicate(a, len);
		if (!is_sorted(a, len))
			arr_to_list(a, len);
	}
	free(result);
	free_split_map(map, len);
	free(a);
	return (0);
}
