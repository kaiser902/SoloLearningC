#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a,b,c;
    printf("Entrez successivement trois Alphabet\n");
    scanf("%c %c %c",&a,&b,&c);
    if (a < b && b < c)
        printf("Ces noms sont classes alphabetiquement\n");
    else
        printf("Ces noms ne sont pas classes\n");
    return 0;
}
