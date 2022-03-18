#include <stdio.h>
void ft_putstr_non_printable(char *str);
int main(void)
{
	char txt[] = "Coucou\ntu vas bien ?";
	char *p = txt;
	ft_putstr_non_printable(p);
	return 0;
}