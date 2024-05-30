/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 20:45:07 by gnicolie          #+#    #+#             */
/*   Updated: 2024/05/13 20:58:45 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// make libreria y relink 
// liberar stack
// optimizar media
void	my_error(t_stack **list_a)//* o **
{
	ft_putstr_fd("Error\n", 2);// añadir char s
	free_stack(list_a);
	exit(1);
}

void	rotatelist(t_stack **a)
{
	t_stack	*min;

	min = find_l_mn((*a));
	set_index((*a));
	while ((*a)->number != min->number)
	{
		if (min->above_median)
			ra(a, true);
		else
			rra(a, true);
	}
}

t_stack	*find_l_mx(t_stack *l)
{
	t_stack	*mx;
	t_stack	*ptr;

	ptr = l;
	mx = l;
	if (ptr == NULL)
		return (ptr);
	while (ptr)
	{
		if (ptr->number > mx->number)
			mx = ptr;
		ptr = ptr->next;
	}
	return (mx);
}

int	main(int argc, char **argv)
{
	t_stack	*list_a;
	t_stack	*list_b;
	char	**num;

	list_a = NULL;
	list_b = NULL;
	num = &argv[1];
	if (argc == 1)
		return (1);
	if (argc == 2)
		num = ft_split(argv[1], ' ');
	ft_printf ("num[0] = %s\n", num[0]);
	if (check_stringe(num) || num[0] == NULL)
	{
		my_error(&list_a);
	}
	init_stack_a(&list_a, num);
	if (is_sorted(list_a))
		return (3);
	if (!is_sorted(list_a))
	{
		if (lstlen(list_a) == 2)
			sa(&list_a, true);
		if (lstlen(list_a) == 3)
			sort3(&list_a);
		if (lstlen(list_a) > 3)
			turkalgorithm(&list_a, &list_b);
	}
	rotatelist(&list_a);
	free_stack(&list_a);
	free_stack(&list_b);
	//free_list(num);
	return (0);
}
