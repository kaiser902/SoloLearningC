#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr1,nbr2;
    char text[20];
    printf("put two number please\n");
    scanf("%2d %d %*f %5s",&nbr1,&nbr2,&text);
    printf("%d %d %s",nbr1,nbr2,text);
    return 0;
}
