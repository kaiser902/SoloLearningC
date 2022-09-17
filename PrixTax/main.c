#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nbr,pht,ttva,pttc;
    printf("Entrez le prix hors taxes :\n");
    scanf("%f",&pht);
    printf("Entrez le nombre d'articles : \n");
    scanf("%f",&nbr);
    printf("Entrez le taux de TVA : \n");
    scanf("%f",&ttva);
    printf("Le prix toutes taxes est : %2.f \n",nbr * pht * (1 + ttva));
    return 0;
}
