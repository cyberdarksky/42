#include <stdio.h>
int ft_str_is_alpha(char *str);
int main(void)
{
	char text[] = "Bilgisayar#$";
	char *p_text = text;
	printf("Sonuc: %d", ft_str_is_alpha(p_text));
	return 0;
}