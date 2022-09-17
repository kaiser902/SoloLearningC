#include <stdio.h>
#include <stdlib.h>

int main()
{
    char full_name[50];
    printf("Enter your full name :\n");
    gets(full_name);
    // gets(full_name, 50, stdin);
    printf("\nHi, %s.",full_name);
    return 0;
}
