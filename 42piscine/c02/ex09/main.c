#include <stdio.h>
char	ft_strcapitalize(char *str);
int main(void)
{
	char text[] = " sALuT, ComMenT tu VAS ? 42Mots QUarante-deUX; cinQuantE+ET+un";
	printf("ONCESI: %s\n", text);
	char *p_text = text;
	ft_strcapitalize(p_text);
	printf("SONRASI: %s\n", text);
	return 0;
}