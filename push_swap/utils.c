# include "push_swap.h"

static long	ft_str_to_long(const char *str, int c, long n)
{
	while (str[c] >= '0' && str[c] <= '9')
	{
		n = n * 10 + (str[c] - '0');
		c++;
	}
	return (n);
}

long	ft_atol(const char *str)
{
	int	c;
	long	n;
	int	i;

	i = 1;
	c = 0;
	n = 0;
	while ((str[c] == ' ') || (str[c] == '\f') || (str[c] == '\n')
		|| (str[c] == '\r') || (str[c] == '\t') || (str[c] == '\v'))
	{
		c++;
	}
	if (str[c] == '-' || str[c] == '+' )
	{
		if (str[c] == '-')
			i = -1;
		c++;
	}
	n = ft_str_to_long(str, c, n) * i;
	return (n);
}
t_stack* last_node(t_stack *a)
{
    t_stack *ptr = a;
    if(ptr == NULL)
        return ptr;
    while(ptr->next != NULL )
        ptr = ptr->next;
    return ptr;
}
t_stack* find_l_mn(t_stack *l)
{
    t_stack *min;
    t_stack *ptr;
    ptr = l;
    min = l;
    if(ptr == NULL)
        return ptr;
    while(ptr )
    {
        if(ptr->number < min->number)
            min = ptr;
        ptr = ptr->next;
    }
    return min;
}


