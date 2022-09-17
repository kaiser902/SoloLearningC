#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr1,fact;
    printf("Veuillez saisie un numero\n");
    scanf("%d",&nbr1);
    fact = 1;
    for (int i = 2;i<=nbr1;i++)
    {
        fact *= i;
    }
    printf("La factorial de %d est : %d\n",nbr1,fact);

    return 0;
}
