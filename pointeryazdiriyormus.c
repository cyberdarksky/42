#include <unistd.h>
#include <stdio.h>
void  ft_putchr(char c)
{
  write(1, &c, 1);
}

void    put_hex(unsigned long long value)
{
    if (value > 16)
        put_hex(value / 16);
    ft_putchr("0123456789abcdef"[value % 16]);
}

void    put_addr(void *p)
{
    unsigned long long value;

    value = (unsigned long long) p;
    put_hex(value);
}
int main(void)
{
    int x = 10;
    int *p = &x;
    put_addr(p);
    printf("\n%p", p);
    return 0;
}