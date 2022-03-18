#include <stdio.h>
char *ft_strcat(char *dest, char *src);
int main(void)
{
        char dest[] = "Hello";
        char src[] = ", world!";
        printf("\nDest: %s\nSrc: %s", dest, src);
        ft_strcat(dest, src);
        printf("\n\nFinish: %s", dest);
        return 0;
}
