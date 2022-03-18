#include <stdio.h>
void ft_ultimate_ft(int *********nbr);

int main(void)
{
    int *********a;
    int ********b;
    int *******c;
    int ******d;
    int *****e;
    int ****f;
    int ***g;
    int **h;
    int *i;

    int n;
    n = 21;

    a = &b;
    b = &c;
    c = &d;
    d = &e;
    e = &f;
    f = &g;
    g = &h;
    h = &i;
    i = &n;

    ft_ultimate_ft(a);
    printf("%d\n", n);
    return 0;
}