#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr1,nbr2;
    float moy;
    printf("Veuillez saisie la premier note :\n");
    scanf("%d",&nbr1);
    printf("Veuillez saisie la deusiem note :\n");
    scanf("%d",&nbr2);
    moy = (nbr1+nbr2)/2;
    printf("La moyenne est :  %2.f\n",moy);
    return 0;
}
