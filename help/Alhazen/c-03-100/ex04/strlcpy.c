#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	index;

	count = 0;
	index = 0;
	while (src[count] != '\0')
		count++;
	if (size != 0)
	{
		while (src[index] != '\0' && index < (size - 1))
		{
			dest[index] = src[index];
			printf("Src: %s\nDest: %s\nIndex: [%d]\n\n", src, dest, index);
			index++;
		}
		dest[index] = '\0';
	}
	return (count);
}

int		main(int argc, char *argv[])
{
	char src[] = "Source";
	char dest[] = "x";
	unsigned int n;

	n = 12;

	printf("Girilen veriler:\n\tsrc: %s\n\tdes: %s\n\tsize: %d\n\n---------------------------\n", src, dest, n);

    n = ft_strlcpy(dest, src, n);

	printf("\n---------------------------\n\nSonuc:\n\tSrc: %s\n\tDes: %s\n\tsize: %d", src, dest, n);
    printf("\n\nArgc: %d\nArgv: %s\n\n", argc, argv[0]);
	return (0);
}