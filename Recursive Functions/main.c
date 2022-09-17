#include <stdio.h>
#include <stdlib.h>

// function declaration
int factorial(int nbr);
int main()
{
    int x = 5;
    printf("The factorial of %d is %d\n",x,factorial(x));
    return 0;
}
int factorial(int nbr)
{
    if (nbr == 1 || nbr == 0)
        return (1);
    else
        return(nbr * factorial(nbr-1));
}
