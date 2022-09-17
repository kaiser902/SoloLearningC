#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr1,nbr2;
    printf("Veuillez saisie deux numero\n");
    scanf("%d %d",&nbr1,&nbr2);
    if (nbr1 == 0 || nbr2 == 0)
        printf("Le produit est null\n");
    else if ((nbr1 > 0 && nbr2 > 0) || (nbr1 < 0 && nbr2 < 0))
        printf("Le produit est : Positif \n");
    else
        printf("Le produit est : Negatif\n");
    return 0;
}
