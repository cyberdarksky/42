#include <unistd.h>

void ft_2write(char k, char l, char m, char n)
{
	write(1, &k, 1);
	write(1, &l, 1);
	write(1, " ", 1);
	write(1, &m, 1);
	write(1, &n, 1);
	if(k != '9' || l != '8' || m != '9' || n != '9')
	{
		write(1, ", ", 2);
	}
}

void ft_print_comb2(void)
{
	char q;
	char w;
	char e;
	char r;
	q = '0';
	w = '0';
	e = '0';
	r = '1';
	while(q <= '9')
	{
		while(w <= '8')
		{
			while(e <= '9')
			{
				while(r <= '9')
				{
					ft_2write(q, w, e, r);
					r++;
				}
				r = '0';
				e++;
			}
			e = '0';
			w++;
		}
		w = '0';
		q++;
	}
}
