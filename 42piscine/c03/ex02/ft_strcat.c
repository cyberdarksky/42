#include <unistd.h>
int ft_len(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}

char *ft_strcat(char *dest, char *src)
{
	int i;
	i = 0;
	int uzunluk;
	uzunluk = ft_len(dest);
	while(src[i] != '\0')
	{
		dest[uzunluk] = src[i];
		uzunluk++;
		i++;
	}
	dest[uzunluk] = '\0';
	return (dest);
}
