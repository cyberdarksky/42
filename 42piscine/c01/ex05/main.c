#include <stdio.h>
void ft_putstr(char *str);
int main(void)
{
	char text[] = "Bilgisayar";
	char *p = text;
	ft_putstr(p);
	return 0;
}