#include <unistd.h>
int textnbr(char *str)
{
	int x;
	int i;
	i = 0;
	x = 0;
	while(str[i] != '\0')
	{
		x = (str[i] - '0') + x * 10;
		i++;
	}
	return x;
}
