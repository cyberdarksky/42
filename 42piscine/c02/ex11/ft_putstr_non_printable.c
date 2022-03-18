#include <unistd.h>
void ft_putchar(char str)
{
	write(1, &str, 1);
}
void ft_dec_to_hex(char str)
{
	char *hex;
	hex = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex[str / 16]);
	ft_putchar(hex[str % 16]);
}
void ft_putstr_non_printable(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] < 32 || str[i] > 126)
		{
			ft_dec_to_hex(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}