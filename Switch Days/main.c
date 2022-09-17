#include <stdio.h>
#include <stdlib.h>

int main()
{
    int days;
    printf("Veuillez saisie un numero entre 1-7\n");
    scanf("%d",&days);
    switch (days)
    {
        case 1 : printf("Lundi\n"); break;
        case 2 : printf("Mardi\n"); break;
        case 3 : printf("Mercredi\n"); break;
        case 4 : printf("Jeudi\n"); break;
        case 5 : printf("Vendredi\n"); break;
        case 6 : printf("Samedi\n"); break;
        case 7 : printf("Dimanche\n"); break;
        default : printf("Le nom que vous avez saisie et incorrect \nVeuillez saisie un nombre entre 1 et 7\n");
    }
    return 0;
}
