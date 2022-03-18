#include <stdio.h>
char *ft_strstr(char *str, char *to_find);
int main(void)
{
	char str[] = "0145234567889";
	char to_find[] = "456";
	printf("Sonuc: %s\n", ft_strstr(str, to_find));
	return 0;
}
