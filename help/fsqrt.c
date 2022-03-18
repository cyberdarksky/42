#include <stdio.h>
float fsqrt(float x)
{
    int i = *(int*)&x;
    i = 0x5f3759df - (i>>1);
    float r = *(float*)&i;
    r = r*(1.5f - 0.5f*x*r*r);
    return r * x;
}
int main(void)
{
        printf("%f\n", fsqrt(144));
        return 0;
}