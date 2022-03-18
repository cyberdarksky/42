#include <unistd.h>
char *ft_strstr(char *str, char *to_find)
{
	if(!(to_find[0]))
	{
		return str;
	}
	int i;
	int j;
	i = 0;
	j = 0;
	int x;
	x = 0;
	while(str[i])
	{
		while(str[i + x] == to_find[j])
		{
			if(!(to_find[j+1]))
			{
				return &str[i];
			}
			j++;
			x++;
		}
		i++;
	}
	return (0);
}
