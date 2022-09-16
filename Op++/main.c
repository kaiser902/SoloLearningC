#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 3;
    x = x + 1; // x is now 4
    x++; // x now is 5
    x += 1; // x now is 6
    ++x; // is now 7
    x -= 1; // is now 6
    x *= 2; // is now 12
    x /= 2; // is now 6
    x %= 2; // is now 0
    printf("La valeur de x est : %d\n",x);
    return 0;
}
