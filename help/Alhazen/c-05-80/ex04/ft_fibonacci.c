#include <unistd.h>
#include <stdio.h>

int ft_fibonacci(int index)
{
	int i;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
	{
		i = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (i);
	}
	else
		return (-1);
}
int main(void)
{
	printf("%d\n", ft_fibonacci(5));
	return 0;
}