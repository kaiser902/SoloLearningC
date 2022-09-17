#include <stdio.h>

int main() {
    int y;
    int x = 6;

    y = (x >= 5) ?  5 : x;

    printf("%d", y);

    /* This is equivalent to :

    if (x >= 5)
        y = 5;
    else
        y = x;

     */

    return 0;
}
