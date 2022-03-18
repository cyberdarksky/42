#include <unistd.h>
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int uzun;
	i = 0;
	uzun = 0;
	while(dest[uzun] != '\0')
	{
		uzun++;
	}
	while(i < nb)
	{
		dest[uzun] = src[i];
		i++;
		uzun++;
	}
	dest[uzun] = '\0';
	return (dest);
}
