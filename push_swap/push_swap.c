# include "push_swap.h"

t_stack* find_l_mx(t_stack *l)
{
    t_stack *mx;
    t_stack *ptr;
    ptr = l;
    mx = l;
    if(ptr == NULL)
        return ptr;
    while(ptr)
    {
        if(ptr->number > mx->number)
            mx = ptr;
        ptr = ptr->next;
    }
    return mx;
} 

int	main(int argc, char **argv) 
{
    t_stack *list_a = NULL;
    t_stack *list_b = NULL; 

    char    **num = &argv[1];
    if(argc == 1)
        return(1);
    if(argc == 2)
        num = ft_split(argv[1], ' '); 
    if(check_stringe(num) || num[0] == NULL)
    {
        ft_printf("Error\n");

        return(1);
    }
    init_stack_a(&list_a, num);
    if(is_sorted(list_a))
        return(3);
    if(!is_sorted( list_a))
    {
        if(lstlen(list_a) == 2)
            sa(&list_a, true);
        if(lstlen(list_a) == 3)
            sort3(&list_a);
        if(lstlen(list_a) > 3)
            turkalgorithm(&list_a, &list_b);
    } 
    rotatelist(&list_a);
	return (0);
}
