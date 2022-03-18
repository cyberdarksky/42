#include <stdio.h>
int ft_strcmp(char *s1, char *s2);
int main(void)
{
	char t1[] = "Bilgisayar";
	char t2[] = "Bilgi";
	printf("%d\n", ft_strcmp(t2, t1));
	return 0;
}
