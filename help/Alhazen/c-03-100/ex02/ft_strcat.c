#include <stdio.h>
#include <unistd.h>

int	ft_len(char *string)
{
	int	i;

	i = 0;
	while (*string)
	{
		i++;
		string++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	say;

	say = ft_len(dest);
	while (*src)
	{
		dest[say] = *src;
		say++;
		src++;
	}
	dest[say] = '\0';
	return (dest);
}

int		main(void)
{
	char dest[20] = "Hello";
	char src[10] = ", world!";

	printf("-----\ndest = %s\nsrc = %s\n", dest, src);
	ft_strcat(dest, src);
	printf("result = %s\n-----\n", dest);

	return (0);
}
