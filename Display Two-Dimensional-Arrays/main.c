#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[2][3] = {
    {3, 4, 5},
    {6, 7, 8}
    };
    int i,j;
    // dispay array contents
    for (i = 0;i<2;i++)
    {
        for(j = 0;j<3;j++)
        {
            printf(" %d",tab[i][j]);
        }
        printf("\n");
    }

    return 0;
}
