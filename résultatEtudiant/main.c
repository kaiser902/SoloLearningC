#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nbr1,nbr2;
    printf("Donner la note doral\n");
    scanf("%f",&nbr1);
    printf("Donner la note decrit\n");
    scanf("%f",&nbr2);
    if ((nbr1+2*nbr2)/3 < 10)
        printf("Module non validee");
    else
        printf("Module validee");
    return 0;
}
