#include <stdio.h>
char *ft_strncat(char *dest, char *src, unsigned int nb);
int main(void)
{
        char dest[] = "Hello";
        char src[] = ", world!";
        printf("\nDest: %s\nSrc: %s", dest, src);
        ft_strncat(dest, src, 5);
        printf("\n\nFinish: %s", dest);
        return 0;
}
