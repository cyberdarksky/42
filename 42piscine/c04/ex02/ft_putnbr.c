#include <unistd.h>
void ft_putnbr(int nb)
{
	char ch[10];
	int i;
	i = 0;
	if(nb == 0)
	{
		write(1, "0", 1);
	}
	if(nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	while(nb > 0)
	{
		ch[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	ch[i] = '\0';
	while(i != 0)
	{
		i--;
		write(1, &ch[i], 1);
	}
}
