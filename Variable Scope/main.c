#include <stdio.h>
#include <stdlib.h>

int global = 0;
int main()
{
    int local1 = 5,local2 = 10;
    global = local1 + local2;
    printf("%d + %d = %d\n",local1,local2,global); // output 15 //
    return 0;
}
