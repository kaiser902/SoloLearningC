#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr;
    printf("Veuillez saisie le numero\n");
    scanf("%d",&nbr);
    if (nbr > 0)
        printf("Le numero est Positif\n");
    else if (nbr < 0)
        printf("Le numero est Negatif\n");
    else
        printf ("Le numero est null\n");
    return 0;
}
