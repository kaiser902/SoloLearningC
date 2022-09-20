#include <stdio.h>
#include <stdlib.h>
union val {
int int_num;
float fl_num;
char str[20];
};
int main()
{
    union val test;
    test.int_num = 1337;
    printf("%d\n",test.int_num);
    return 0;
}
