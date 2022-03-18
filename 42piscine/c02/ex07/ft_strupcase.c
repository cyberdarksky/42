#include <unistd.h>
char *ft_strupcase(char *str)
{
	int i;
	i = 0;
	int d;
	d = 0;
	char kucuk = 'a';
	char buyuk = 'A';
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			i++;
		}
		else
		{
			if ((kucuk + d) == str[i])
			{
				str[i] = (buyuk + d);
				d = 0;
				i++;
			}
			else
			{
				d++;
			}
		}
	}
	return str;
}