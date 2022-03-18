#include <stdio.h>
void ft_swap(int *a, int *b);

int main(void)
{
    int a, b;
    int *p_a, *p_b;
    a = 10;
    b = 20;
    p_a = &a;
    p_b = &b;
    ft_swap(p_a, p_b);
    printf("%d\n%d\n", a, b);
    return 0;
}