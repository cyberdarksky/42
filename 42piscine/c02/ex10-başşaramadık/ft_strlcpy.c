#include <stdio.h>
#include <unistd.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	int				src_size;

	index = 0;
	src_size = 0;
	while (src[src_size])
	{
		src_size++;
	}
	while (src[index] && index < size - 1)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (src_size);
}

int		main(void)
{
	char src[] = "Source";
	char dest[] = "";
	unsigned int n;

	n = 4;

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n\tsize: %d\n", src, dest, n);

    n = ft_strlcpy(dest, src, n);

	printf("AFTER\n\tsrc: %s\n\tdes: %s\n\tsize: %d\n\n", src, dest, n);
	return (0);
}