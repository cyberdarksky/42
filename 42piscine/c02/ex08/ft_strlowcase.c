#include <unistd.h>
char *ft_strlowcase(char *str)
{
	int i;
	int j;
	int d;
	d = 0;
	i = 0;
	j = 0;
	char buyuk;
	char kucuk;
	buyuk = 'A';
	kucuk = 'a';

	while(str[d] != '\0')
	{
		if(str[d] < 'A' || str[d] > 'Z')
		{
			d++;
		}

		else
		{
			if(str[d] == (buyuk + i))
			{
				str[d] = (kucuk + i);
				d++;
				i = 0;
			}
			else
			{
				i++;
	 		}

		}

	}
	return str;
}