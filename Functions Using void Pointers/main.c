#include <stdio.h>
#include <stdlib.h>

void * square(const void *num);
int main()
{
    // void * square (const void *);
    int x, sq_int;
    x = 6;
    sq_int = square(&x);
    printf("%d squared is %d\n",x,sq_int);
    return 0;
}
void* square(const void *num)
{
    static int result;
    result = (*(int *)num) * (*(int *)num);
    return(result);
}
