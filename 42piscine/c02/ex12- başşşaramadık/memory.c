#include <stdio.h>
#include <unistd.h>
void	ft_putaddr_fd(void *str, int fd)
{
	long int			div;
	char				temp;
	unsigned long int	n;

	n = (unsigned long int)str;
	div = 16;
	write(fd, "0x", 3);
	while (n / div >= 16)
		div *= 16;
	while (div > 0)
	{
		temp = '0' + n / div;
		if (temp > '9')
		{
			temp += 39;
			write(fd, &temp, 1);
		}
		else
			write(fd, &temp, 1);
		n %= div;
		div /= 16;
	}
}

void	ft_putaddr(void *str)
{
	ft_putaddr_fd(str, 1);
}
int main(void)
{
    char t[] = "Deneme yazisi";
    ft_putaddr(t);
	printf("\n%p", t);
    return 0;
}