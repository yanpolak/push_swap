/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <ymarival@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:13:03 by ymarival          #+#    #+#             */
/*   Updated: 2023/02/04 14:24:26 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_list	t_list;

struct s_list
{
	int		data;
	t_list	*next;
	int		index;
};

int		ft_strlen( char *str);
char	*ft_join_str(char **str);
char	*ft_strjoin(char *str_main, char *str_copy);
char	**ft_split(char const *s, char c);
void	checker(char *str);
int		*char_to_int(int len, char **map);
int		ft_atoi( char *str);
int		matrix_length(char **map);
void	check_duplicate(int *a, int len);
void	arr_to_list(int *a, int len);
t_list	*arr_to_list_helper(int *a, int len);
void	sa(t_list **list);
void	sb(t_list **list);
void	ss(t_list **a_list, t_list **b_list);
void	pa(t_list **a_list, t_list **b_list);
void	pb(t_list **a_list, t_list **b_list);
void	ra_rb(t_list **list, int i);
int		cat_list_beg(t_list **list);
void	rr(t_list **list_a, t_list **list_b);
void	rra_rrb(t_list **list, int i);
void	rrr(t_list **list_a, t_list **list_b);
void	index_list(t_list **list, int len);
void	sort(t_list **stack_a, t_list **stack_b, int len);
void	sort_2(t_list **stack_a);
void	sort_3(t_list **stack_a);
void	sort_4(t_list **stack_a, t_list **stack_b);
void	sort_5(t_list **stack_a, t_list **stack_b);
void	sort_6(t_list **stack_a, t_list **stack_b, int n);
int		max_list(t_list **list);
void	fill_a(t_list **stack_a, t_list **stack_b, int len);
int		is_sorted( int *arr, int len);
void	free_list(t_list **stack);
void	free_split_map(char **map, int len);
void	error(void);

#endif