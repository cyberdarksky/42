#include <unistd.h>

void ft_putchar(char x)
{
	write(1, &x, 1);
}

void ft_putnbr(int nb)
{
	int nbr;
	int i;
	char c[10];
	nbr = nb;
	if(nbr == 0)
	{
		ft_putchar('0');
	}
	if(nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	i = 0;
	while(nbr > 0)
	{
		c[i] = nbr % 10 + '0';
		nbr = nbr / 10;
		i++;
	}
	i--;
	while(i >= 0)
	{
		ft_putchar(c[i]);
		i--;
	}
}
