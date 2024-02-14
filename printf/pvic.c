#include <stdio.h>
#include <stdint.h>
#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void ft_put_ptr(uintptr_t num)
{
  if (num >= 16)
        {
                ft_put_ptr(num / 16);
                ft_put_ptr(num % 16);
        }
        else
        {
                if (num <= 9)
                        ft_putchar_fd((num + '0'), 1);
                else
                        ft_putchar_fd((num - 10 + 'a'), 1);
        }
}

int main(void)
{
    ft_put_ptr(-14523);
    return(0);
}
