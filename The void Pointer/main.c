#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 1337;
    float y = 13.37;
    char c = 'A';
    void *ptr;
    ptr = &x;
    printf("void ptr points to %d\n",*((int *)ptr));
    ptr = &y;
    printf("void ptr points to %f\n",*((float *)ptr));
    ptr = &c;
    printf("void ptr points to %c\n",*((char *)ptr));
    return 0;
}
