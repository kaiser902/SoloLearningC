#include <stdio.h>
#include <stdlib.h>
int i;
int main()
{
    int tab[10];
    // remplissage de tableaux
    for ( i=0;i<10;i++)
    {
        tab[i] = i * 10;
    }
    // affichage de tableaux
    for (i = 0;i<10;i++)
    {
        printf("%d\n",tab[i]);
    }
    return 0;
}
