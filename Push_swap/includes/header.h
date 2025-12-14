/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 17:20:50 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/12/14 05:28:31 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <string.h>
# include <limits.h>

typedef struct s_list
{
	int					data;
	struct s_list		*next;
}	t_list;

// Parsing functions
t_list	*make_stack(int size, char **tokens);
long	ft_atol(char *token, t_list *head);
void	ft_killer(t_list *stack);
void	ft_split_cleaner(char **res);
void	array_killer(int *array, t_list **stack_a);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		is_valid_split(char const *tokens);
void	ft_split_controler(char **tokens);

// the function to check if the given arguments are sorted already
void	is_sorted(t_list *stack_a);

//Op functions
void	sa(t_list **stack_a);
void	ra(t_list **stack_a);
void	rra(t_list **stack_a);
void	push_b(t_list **stack_a, t_list **stack_b);

void	sb(t_list **stack_b);
void	rb(t_list **stack_b);
void	rrb(t_list **stack_b);
void	push_a(t_list **stack_b, t_list **stack_a);

// min_max
void	min_max(t_list **stack_a, t_list **stack_b);
void	sort(t_list **stack_a, t_list **stack_b, int i);
int		*make_sorted_array(t_list **stack_a);
void	insertion_sort(int *array, int size);
int		def_range_end(int i, int range_num, int size, int range_size);
int		in_range(t_list *stack_a, int start, int end);
int		def_range_size(t_list **stack_a);

// act_0
int		is_sorted_list(t_list *stack_a);
void	act_0(t_list **stack_a, t_list **stack_b);
int		list_size(t_list **stack);

// act_1
void	act_1(t_list **stack_a, int start, int end);

// act_2
void	act_2(t_list **stack_a, t_list **stack_b);
int		find_between_position(t_list *stack_b, int value);
void	find_min_position(t_list *stack_b, int *min_pos, int *min_val);
void	find_max_position(t_list *stack_b, int *max_pos, int *max_val);

// act_3
void	act_3(t_list **stack_a, t_list **stack_b);
int		find_min_index(t_list *stack_a);
int		find_max_index(t_list *stack_b);

#endif
