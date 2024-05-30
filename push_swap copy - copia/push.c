/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 20:45:18 by gnicolie          #+#    #+#             */
/*   Updated: 2024/05/13 21:09:18 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **src, t_stack **dest)
{
	t_stack	*pnode;

	if (*src == NULL)
		return ;
	pnode = (*src);
	if ((*src)->next != NULL)
	{
		(*src)->next->prev = NULL;
		(*src) = (*src)->next;
	}
	else
		(*src) = NULL;
	pnode->prev = NULL;
	if ((*dest) != NULL)
	{
		pnode->next = (*dest);
		(*dest)->prev = pnode;
		(*dest) = pnode;
	}
	else
	{
		(*dest) = pnode;
		(*dest)->next = NULL;
	}
	return ;
}

void	pa(t_stack **a, t_stack **b, bool print)
{
	push(b, a);
	if (print)
		ft_printf("pa\n");
}

void	pb(t_stack **a, t_stack **b, bool print)
{
	push(a, b);
	if (print)
		ft_printf("pb\n");
}
