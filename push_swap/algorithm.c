# include "push_swap.h" 


int lstlen(t_stack *a)
{
    t_stack *ptr = a;
    int n = 1;
    if(ptr == NULL)
        return 0;
    while(ptr->next != NULL)
    {    
        n++;
        ptr=ptr->next;
    }   
    return n;
}

void    sort3(t_stack **head)
{
     ft_printf("%i %i %i\n", (*head)->number, (*head)->next->number,(*head)->next->next->number);
    if( ((*head)->number > (*head)->next->number) && ((*head)->number > (*head)->next->next->number))
        ra(head,true);
    ft_printf("%i %i %i\n", (*head)->number, (*head)->next->number,(*head)->next->next->number);
    if( ((*head)->number < (*head)->next->number) && ((*head)->next->number > (*head)->next->next->number))
        rra(head,true);
    ft_printf("%i %i %i\n", (*head)->number, (*head)->next->number,(*head)->next->next->number);
    if( ((*head)->number > (*head)->next->number))
        sa(head,true);
    ft_printf("%i %i %i\n", (*head)->number, (*head)->next->number,(*head)->next->next->number);
}

void    set_index(t_stack *list)
{
    int i;
    int median;
    i = 0;
    if(!list)
        return;
    median = lstlen(list)/2;
    while(list)
    {
        list->index = i;
        if(i<=median)
            list->above_median = true;
        else
           list->above_median = false; 
        list = list->next;
        i++;
    }
}
void    set_target(t_stack *lista, t_stack *listb)
{
    t_stack *b;
    t_stack *target;
    long    best_val;

    if(!lista || !listb)
        return;
    while(lista)
    {
        best_val = LONG_MIN;
        b = listb;
        while (b)
        {
            if(b->number < lista->number 
                && b->number > best_val)
            {
                best_val = b->number;
                target = b;
            }
            b = b->next;
        }
        if(best_val == LONG_MIN)
            lista->target_node = find_l_mx(listb);
        else 
            lista->target_node = target;
        lista = lista->next;
    }
}

void    set_targetbig(t_stack *lista, t_stack *listb)//test
{
    t_stack *a;
    t_stack *target;
    long    best_val;

    if(!lista || !listb)
        return;
    while(listb)
    {
        best_val = LONG_MAX;
        a = lista;
        while (a)
        {
            if(a->number > listb->number 
                && a->number < best_val)
            {
                best_val = a->number;
                target = a;
            }
            a = a->next;
        }
        if(best_val == LONG_MAX)
            listb->target_node = find_l_mn(lista);
        else 
            listb->target_node = target;
        listb = listb->next;
    }
}
