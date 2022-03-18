#include <stdio.h>
void ft_sort_int_tab(int *tab, int size);
void ft_yazdir(int *kaynak, int boyut)
{
	int i;
	i = 0;
	int j = boyut;
	while(i < j)
	{
		printf("%d", *(kaynak+i));
		if(i < j-1)
		{
			printf(", ");
		}
		i++;
	}
}
int main(void)
{
	int girdi[] = {6, 1, 9, 1, 5, 8};
	int size = 6;
	int *p_girdi = girdi;
	ft_sort_int_tab(p_girdi, size);
	ft_yazdir(p_girdi, size);
	return 0;
}
