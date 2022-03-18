#include <unistd.h>
void ft_ultimate_div_mod(int *a, int *b)
{
	int orj_a;
	int orj_b;
	orj_a = *a;
	orj_b = *b;
	*a = orj_a / orj_b;
	*b = orj_a % orj_b;
}
