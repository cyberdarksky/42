#include <stdio.h>
int ft_strlen(char *src);
int main(int agrc, char *argv[])
{
	char dizi[] = "Bilgisayar";
	int x = ft_strlen(argv[1]);
	printf("%d\n", x);
	return 0;
}
