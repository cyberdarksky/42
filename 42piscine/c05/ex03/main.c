#include <stdio.h>
int textnbr(char *src);
int ft_recursive_power(int nb, int power);
int main(int argc, char *argv[])
{
	int x = textnbr(argv[1]);
	int y = textnbr(argv[2]);
	printf("%d\n", ft_recursive_power(x, y));
	return (0);
}
