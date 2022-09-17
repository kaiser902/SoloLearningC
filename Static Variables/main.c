#include <stdio.h>
#include <stdlib.h>

void say_hello();
int main()
{
    int i = 0;
    for(;i<5;i++)
    say_hello();
    return 0;
}
void say_hello()
{
    static int call_number = 1;
    printf("Hello number : %d \n",call_number);
    call_number++;
}
