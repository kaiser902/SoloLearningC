#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr1,somm;
    printf("Veuillez saisie le numero de depart\n");
    scanf("%d",&nbr1);
    somm = 0;
    for (int i = 1;i<=nbr1;i++)
    {
        somm += i;
    }
    printf("La somme de numero %d : est %d\n",nbr1,somm);
    return 0;
}
