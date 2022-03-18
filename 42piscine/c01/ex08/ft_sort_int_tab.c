#include <unistd.h>
void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int k;
	int l;
	int yeni[size];
	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while(l < size)
	{
		while(i < size)
		{
			if(j == *(tab+i))
			{
				yeni[l] = *(tab+i);
				l++;
				i++;
			}
			else
			{
				i++;
			}
		}
		j++;
		i = 0;

	}
	while(i < size)
	{
		*(tab+i) = yeni[i];
		i++;
	}
}