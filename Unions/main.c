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
    /*
        union val u1;
    union val u2;
    u1.int_num = 1337;
    u2 = u1;
    printf("%d", u2.int_num);

    */
}
