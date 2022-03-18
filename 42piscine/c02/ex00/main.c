#include <stdio.h>
char *ft_strcpy(char *dest, char *src);
int main(void)
{
	char dizi1[] = "Bilgisayar";
	char dizi2[] = ".";
	char *p_dizi1 = dizi1;
	char *p_dizi2 = dizi2;
	printf("%s\n", ft_strcpy(p_dizi2, p_dizi1));
	return 0;
}
