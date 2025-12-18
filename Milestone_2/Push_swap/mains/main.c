/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 17:20:56 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/12/13 22:36:36 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = make_stack(argc, argv);
	is_sorted(stack_a);
	stack_b = NULL;
	min_max(&stack_a, &stack_b);
	ft_killer(stack_a);
	ft_killer(stack_b);
	return (0);
}
