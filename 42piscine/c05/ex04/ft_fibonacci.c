#include <stdio.h>
#include <unistd.h>
int textnbr(char *str);
int ft_fibonacci(int index)
{
	int x;
	if(index == 0)
		return (0);
	else if(index == 1)
		return (1);
	else if(index > 1)
	{
		x = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (x);
	}
	else
		return (-1);
}

int main(int argc, char *argv[])
{
	int x = textnbr(argv[1]);
	printf("%d\n", ft_fibonacci(x));
	return 0;
}
