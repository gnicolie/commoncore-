/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 20:45:24 by gnicolie          #+#    #+#             */
/*   Updated: 2024/05/13 21:03:31 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrotate(t_stack **head)
{
	t_stack	*lstnode;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	lstnode = last_node(*head);
	lstnode->prev->next = NULL;
	lstnode->next = (*head);
	lstnode->prev = NULL;
	(*head) = lstnode;
	lstnode->next->prev = (*head);
	return ;
}

void	rra(t_stack **a, bool print)
{
	rrotate(a);
	if (print)
		ft_printf("rra\n");
}

void	rrb(t_stack **b, bool print)
{
	rrotate(b);
	if (print)
		ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b, bool print)
{
	rrotate(a);
	rrotate(b);
	if (print)
		ft_printf("rrr\n");
}