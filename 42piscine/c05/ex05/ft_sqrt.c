#include <stdio.h>
#include <unistd.h>
int ft_sqrt(int nb)
{
	int x;
	x = 0;
	if(nb <= 0)
		return (0);
	while(x * x <= nb)
	{
		if((x * x) == nb)
			return (x);
		else if(nb > 44444)
			return (0);
		else
			x++;
	}
	return (0);
}
int main(void)
{
	printf("%d\n", ft_sqrt(144));
	return 0;
}
