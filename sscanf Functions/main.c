#include <stdio.h>
#include <stdlib.h>

int main()
{
    char info[] = "Snoqualmie WA 13190 93";
    char city[50];
    char state[50];
    int population;
    sscanf(info , "%s %s %d",city,state,&population);
    printf("%d people live in %s, %s.",population,city,state);
    return 0;
}
