#include <stdio.h>
#include <unistd.h>
int ft_iterative_power(int nb, int power)
{
	if(power < 0)
		return (0);
	else if(power == 0)
		return (1);
	while(power > 1)
	{
		nb *= nb;
		power--;
	}
	return nb;
}

int main(void)
{
	printf("%d\n", ft_iterative_power(0, 2));
	return (0);
}
