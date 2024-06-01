/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freerotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 19:17:21 by gnicolie          #+#    #+#             */
/*   Updated: 2024/06/01 19:18:42 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_both_b_a(t_stack **a, t_stack **b, t_stack *cheapest)
{
	if (cheapest->above_median && cheapest->target_node->cheapest)
	{
		while (cheapest->number != (*b)->number
			&& cheapest->target_node->number != (*a)->number)
			rr(a, b, true);
	}
	else if (!cheapest->above_median && !cheapest->target_node->above_median)
	{
		while (cheapest->number != (*b)->number
			&& cheapest->target_node->number != (*a)->number)
			rrr(a, b, true);
	}
}

void	rotate_both_a_b(t_stack **a, t_stack **b, t_stack *cheapest)
{
	if (cheapest->above_median && cheapest->target_node->cheapest)
	{
		while (cheapest->number != (*a)->number
			&& cheapest->target_node->number != (*b)->number)
			rr(a, b, true);
	}
	else if (!cheapest->above_median && !cheapest->target_node->above_median)
	{
		while (cheapest->number != (*a)->number
			&& cheapest->target_node->number != (*b)->number)
			rrr(a, b, true);
	}
}

void	free_stack(t_stack **a)
{
	t_stack	*ptr;
	t_stack	*temp;

	ptr = *a;
	if (!a)
	{
		return ;
	}
	while (ptr)
	{
		temp = ptr->next;
		ptr->number = 0;
		free(ptr);
		ptr = temp;
	}
}

void	free_list(char **a)
{
	int	i;

	i = 0;
	while (a[i])
	{
		free(a[i]);
		i++;
	}
	free(a);
}
