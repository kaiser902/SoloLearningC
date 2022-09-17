#include <stdio.h>
#include <stdlib.h>

int sum_up(int nbr1,int nbr2);
int main()
{
    int x = 3,y = 12;
    printf("%d + %d = %d\n",x,y,sum_up(x,y));
    return 0;
}
int sum_up(int nbr1,int nbr2)
{
    nbr1 += nbr2;
    return(nbr1);
}
