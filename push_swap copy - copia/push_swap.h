/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 20:45:12 by gnicolie          #+#    #+#             */
/*   Updated: 2024/05/13 20:49:49 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./printf/ft_printf.h"
# include "./printf/libft/libft.h"
# include "push_swap.h"
# include <limits.h>
# include <stdarg.h>
# include <stdbool.h>
# include <stdio.h>

typedef struct s_stack
{
	int				number;
	int				index;
	int				push_cost;
	bool			above_median;
	bool			cheapest;
	struct s_stack *target_node; // s_stack?
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;
// inicializacion y gestion de errores
void				init_stack_a(t_stack **a, char **num);
bool				check_stringe(char **num);
bool				check_notint(char *ptr);
bool				check_norep(char **ptr);
long				ft_atol(const char *str);
// operaciones simples
void				swap(t_stack **stack);
void				sa(t_stack **a, bool print);
void				sb(t_stack **b, bool print);
void				ss(t_stack **a, t_stack **b, bool print);
void				rotate(t_stack **head);
void				ra(t_stack **a, bool print);
void				rb(t_stack **b, bool print);
void				rr(t_stack **a, t_stack **b, bool print);
t_stack				*last_node(t_stack *a);
void				rrotate(t_stack **head);
void				rra(t_stack **a, bool print);
void				rrb(t_stack **b, bool print);
void				rrr(t_stack **a, t_stack **b, bool print);
void				push(t_stack **src, t_stack **dest);
void				pa(t_stack **a, t_stack **b, bool print);
void				pb(t_stack **b, t_stack **a, bool print);
// ordenar stack
int					lstlen(t_stack *a);
bool				is_sorted(t_stack *a);
int					merge_swap(t_stack **a, t_stack **b);
// algoritmo
void				sort3(t_stack **head);
t_stack				*find_l_mx(t_stack *l);
t_stack				*find_l_mn(t_stack *l);
void				set_index(t_stack *list);
void				set_target(t_stack *lista, t_stack *listb);
void				move_a_to_b(t_stack **a, t_stack **b, t_stack *cheapest);
t_stack				*set_cheapest(t_stack *a);
void				cal_cost(t_stack *a, t_stack *b);
void				turkalgorithm(t_stack **a, t_stack **b);
void				set_targetbig(t_stack *lista, t_stack *listb);
void				move_b_to_a(t_stack **a, t_stack **b, t_stack *cheapest);
void				rotatelist(t_stack **a);
void		rotate_both_b_a(t_stack **a, t_stack **b, t_stack *cheapest);
void	rotate_both_a_b(t_stack **a, t_stack **b, t_stack *cheapest);
void	my_error( t_stack **list_a);
void	free_stack(t_stack **list);
void	free_list(char **a);

#endif