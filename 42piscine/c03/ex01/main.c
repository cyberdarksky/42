#include <stdio.h>
int ft_strncmp(char *s1, char *s2, unsigned int n);
int main(void)
{
	char t1[] = "Bilgisayar";
	char t2[] = "Bilgi";
	printf("%d", ft_strncmp(t2, t1, 7));
	return 0;
}
