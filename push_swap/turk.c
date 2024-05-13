#include "push_swap.h"
void    turkalgorithm(t_stack **a, t_stack **b)
{
    t_stack *cheapest;

    ft_printf("ave1\n");
    ft_printf("ave2\n");
    while(lstlen(*a) !=3 && lstlen(*b) != 2)
    {
        pb(a, b, true);
        ft_printf("%i %i\n", lstlen(*a), lstlen(*b));
    }
    //caso de 4 ?
    ft_printf("ave\n");
    while (lstlen((*a)) != 3)
    {
        set_index((*a));
        set_index((*b));
        set_target((*a), (*b));
        cal_cost((*a),(*b));
        cheapest = set_cheapest((*a));
        move_a_to_b(a,b, cheapest);
    }
    sort3(a);
    while (lstlen((*b)) != 0)
    {
        set_index((*a));
        set_index((*b));
        set_targetbig((*a), (*b));
        cal_cost((*b),(*a));
        cheapest = set_cheapest((*b));
        move_b_to_a(a,b, cheapest);
    }
}

void cal_cost(t_stack *a, t_stack *b)
{
    int len_a;
    int len_b;

    len_a = lstlen(a);
    len_b = lstlen(b);
    while (a)
    {
        a->push_cost = a->index;
        if(!(a->above_median))
            a->push_cost = len_a - (a->index);
        if(a->target_node->above_median)
            a->push_cost += (a->target_node->index);
        else
            a->push_cost += len_b - (a->target_node->index);
        a = a->next;
    }
    
}

t_stack *set_cheapest(t_stack *a)
{
    long    cheapest_val;
    t_stack *cheapest_node;

    if(!a)
        return NULL;
    cheapest_val = LONG_MAX;
    while (a)
    {
        if(a->push_cost < cheapest_val)
        {
            cheapest_val = a->push_cost;
            cheapest_node = a;
        }
        a = a->next;
    }
    cheapest_node->cheapest = true;
    return cheapest_node;
}

void move_a_to_b(t_stack **a, t_stack **b, t_stack *cheapest)
{
    while (cheapest->number != (*a)->number)
    {
        if(cheapest->above_median)
            ra(a,true);
        else    
            rra(a, true);
    }
    while (cheapest->target_node->number != (*b)->number)
    {
        if(cheapest->above_median)
            rb(b,true);
        else    
            rrb(b, true);
    }
    pb(a,b,true);
}

void move_b_to_a(t_stack **a, t_stack **b, t_stack *cheapest)//test
{
    while (cheapest->number != (*b)->number)
    {
        if(cheapest->above_median)
            rb(b,true);
        else    
            rrb(b, true);
    }
    while (cheapest->target_node->number != (*a)->number)
    {
        if(cheapest->above_median)
            ra(a,true);
        else    
            rra(a, true);
    }
    pa(a,b,true);
}
void rotatelist(t_stack **a)
{
    t_stack *min;
    
    min = find_l_mn((*a));
    set_index((*a));
    while ((*a)->number != min ->number)
    {
        if(min->above_median)
            ra(a,true);
        else
            rra(a,true);
    }
}