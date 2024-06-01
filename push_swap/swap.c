/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 20:45:27 by gnicolie          #+#    #+#             */
/*   Updated: 2024/06/01 20:52:52 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **head)
{
	if (*head == NULL || (*head)->next == NULL)
		return ;
	(*head) = (*head)->next;
	(*head)->prev->prev = *head;
	(*head)->prev->next = (*head)->next;
	if ((*head)->next)
		(*head)->next->prev = (*head)->prev;
	(*head)->next = (*head)->prev;
	(*head)->prev = NULL;
}

void	sa(t_stack **a, bool print)
{
	swap(a);
	if (print)
		ft_printf("sa\n");
}

void	sb(t_stack **b, bool print)
{
	swap(b);
	if (print)
		ft_printf("sb\n");
}

void	ss(t_stack **a, t_stack **b, bool print)
{
	swap(a);
	swap(b);
	if (print)
		ft_printf("ss\n");
}
