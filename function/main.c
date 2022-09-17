#include <stdio.h>
#include <stdlib.h>
int square (int nbr);
int main()
{
    int x;
    x = 5;
    printf("%d squared is %d\n",x,square(x));
    return 0;
}
int square(int nbr)
{
    int res;
    res = nbr * nbr;
    return (res);
}
