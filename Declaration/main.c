#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr1,nbr2;
    char alpha = 'Z';
    float salary = 12.34;
    nbr1 = 668.5;
    nbr2 = 668.5;
    printf("la somme de deux nombre est : %d \n",(nbr1+nbr2)+1); // output : 1337
    printf("le salaire est : %.2f \n",salary); // output 12.34
    printf("La dernier lettre d alphabet est : %c \n",alpha); // output : Z;
    printf("Au revoir\n");
    return 0;
}
