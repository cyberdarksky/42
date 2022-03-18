#include <stdio.h>
int main()
{
    char x = '\t';
    char *p = &x;
    *p = 13;
    printf("a%ca%ca", x, x);
    return 0;
}