#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char src[] = "Kaynak metni";
	char dest[] = "Ikincil metin.";
	unsigned int n;

	n = 5;
	printf("\nn: %d\n", n);
	printf("ONCESI\n\tsrc: %s\n\tdes: %s\n", src, dest);

    ft_strncpy(dest, src, n);

	printf("SONRASI\n\tsrc: %s\n\tdes: %s", src, dest);
    printf(" --byCyber\n");
	return (0);
}
