#include <unistd.h>
void ft_swap(int *a, int *b)
{
    int gecici;
    gecici = *a;
    *a = *b;
    *b = gecici;
}