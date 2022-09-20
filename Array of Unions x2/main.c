#include <stdio.h>
#include <stdlib.h>

union type {
int i_val;
float f_val;
char ch_val;
};
int main()
{
    union type arr[3];
    arr[0].i_val = 1337;
    arr[1].f_val = 13.37;
    arr[2].ch_val = 'x';
    printf("1st element is %d\n, 2nd is %4.2f\n, and the 3rd is %c\n", arr[0].i_val, arr[1].f_val, arr[2].ch_val);
    return 0;
}
