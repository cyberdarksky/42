#include <stdio.h>
int ft_strlen(char *str);
int main(void)
{
	char text[] = "Bilgisayar";
	char *str = text;
	printf("%d", ft_strlen(str));
	return 0;
}