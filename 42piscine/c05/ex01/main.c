#include <stdio.h>
int textnbr(char *str);
int ft_recursive_factorial(int nb);
int main(int argc, char *argv[])
{
	int x = textnbr(argv[1]);
	int y = ft_recursive_factorial(x);
	printf("%d\n", y);
	return (0);
}
