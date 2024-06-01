/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 20:45:20 by gnicolie          #+#    #+#             */
/*   Updated: 2024/06/01 20:53:02 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **head)
{
	t_stack	*lstnode;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	lstnode = last_node(*head);
	lstnode->next = (*head);
	(*head) = (*head)->next;
	(*head)->prev = NULL;
	lstnode->next->prev = lstnode;
	lstnode->next->next = NULL;
	return ;
}

void	ra(t_stack **a, bool print)
{
	rotate(a);
	if (print)
		ft_printf("ra\n");
}

void	rb(t_stack **b, bool print)
{
	rotate(b);
	if (print)
		ft_printf("rb\n");
}

void	rr(t_stack **a, t_stack **b, bool print)
{
	rotate(a);
	rotate(b);
	if (print)
		ft_printf("rr\n");
}
