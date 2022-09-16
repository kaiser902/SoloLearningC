#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr1,nbr2,swift;
    printf("put two number!\n");
    scanf("%ld %ld",&nbr1,&nbr2);
    swift = nbr1;
    nbr1 = nbr2;
    nbr2 = swift;
    printf("You entered : %d \n and %d \n", nbr1,nbr2);
    return 0;
}
