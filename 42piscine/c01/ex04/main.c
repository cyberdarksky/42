#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b);
int main(void)
{
	int a = 50;
	int b = 6;
	int *div = &a;
	int *mod = &b;
	ft_ultimate_div_mod(div, mod);
	printf("%d\n%d\n", *div, *mod);
	return 0;
}