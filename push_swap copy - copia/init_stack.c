/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 20:45:00 by gnicolie          #+#    #+#             */
/*   Updated: 2024/05/17 12:40:44 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack_a(t_stack **a, char **num)
{
	char	**ptr;
	t_stack	*new_node;
	t_stack	*last_node;

	ptr = num;
	while (*ptr != NULL)
	{
		new_node = malloc(sizeof(t_stack));
		if (new_node == NULL)
			return ;
		new_node->number = ft_atol(*ptr);
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
		ptr++;
	}
	return ;
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
	while (ptr[i] != '\0')
	{
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
			if (ft_strncmp(num[i], *ptr, sizeof(int)) == 0)
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
