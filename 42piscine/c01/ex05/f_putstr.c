#include <unistd.h>

void ft_putchar(char x)
{
	write(1, &x, 1);
}
void ft_putstr(char *str)
{
	int i = 0;
	char yazi;
	while(*(str+i) != '\0')
	{
		yazi = *(str+i);
		ft_putchar(yazi);
		i++;
	}
}