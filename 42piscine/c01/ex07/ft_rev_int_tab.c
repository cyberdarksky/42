#include <unistd.h>
void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	i = 0;
	j = size;
	int yeni[size];
	while(i < size)
	{
		yeni[j-1] = *(tab+i);
		j--;
		i++;
	}
	i = 0;
	while(i < size)
	{
		*(tab+i) = yeni[i];
		i++;
	}
}