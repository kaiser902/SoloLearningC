#include <stdio.h>
#include <stdlib.h>
/*
    "Poussin" de 6 � 7 ans
� "Pupille" de 8 � 9 ans
� "Minime" de 10 � 11 ans
� "Cadet" apr�s 12 ans
 */
int main()
{
    int age;
    printf("Entrez lage de lenfant :\n");
    scanf("%d",&age);
    if (age >= 12)
        printf("Categorie Cadet\n");
    else if (age >= 10)
        printf("Categorie Minime\n");
    else if (age >= 8)
        printf("Categorie Pupille\n");
    else if (age >= 6)
        printf("Categorie Poussin\n");
    return 0;
}
