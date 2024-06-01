/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 20:45:00 by gnicolie          #+#    #+#             */
/*   Updated: 2024/06/01 19:18:33 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack_a(t_stack **a, char **num)
{
	t_stack	*new_node;
	t_stack	*last_node;

	while (*num != NULL)
	{
		new_node = malloc(sizeof(t_stack));
		if (new_node == NULL)
			my_error(a);
		new_node->number = ft_atol(*num);
		new_node->next = NULL;
		if (*a == NULL)
		{
			*a = new_node;
			new_node->prev = NULL;
			last_node = new_node;
		}
		else
		{
			last_node->next = new_node;
			new_node->prev = last_node;
			last_node = new_node;
		}
		num++;
	}
}

bool	check_stringe(char **num)
{
	char	**ptr;
	long	n;

	ptr = num;
	while (*ptr != NULL)
	{
		n = ft_atol(*ptr);
		if (n < INT_MIN || n > INT_MAX)
			return (true);
		if (check_notint(*ptr))
			return (true);
		ptr++;
	}
	if (check_norep(num))
		return (true);
	return (false);
}

bool	check_notint(char *ptr)
{
	int	i;

	i = 0;
	if (ptr[i] == '-' || ptr[i] == '+')
	{
		i++;
	}
	if (ptr[i] == '\0')
		return (true);
	while (ptr[i] != '\0')
	{
		if (ptr[i] == ' ' || ptr[i] == '\t' || ptr[i] == '\n' || ptr[i] == '\v'
			|| ptr[i] == '\f' || ptr[i] == '\r')
			return (true);
		if (!ft_isdigit(ptr[i]))
			return (true);
		i++;
	}
	return (false);
}

bool	check_norep(char **num)
{
	int		i;
	int		t;
	char	**ptr;

	t = 0;
	ptr = num;
	while (*ptr != NULL)
	{
		i = 1 + t;
		while (num[i] != NULL)
		{
			if (ft_atol(*ptr) == ft_atol(num[i]))
				return (true);
			i++;
		}
		ptr++;
		t++;
	}
	return (false);
}

bool	is_sorted(t_stack *a)
{
	t_stack	*ptr;

	ptr = a;
	while (ptr->next != NULL)
	{
		if (ptr->number > ptr->next->number)
			return (false);
		ptr = ptr->next;
	}
	return (true);
}
