#include <stdio.h>
#include <stdlib.h>

int main()
{
    float price = 17.5;
    int increase = 2;
    float new_price;
    new_price = price + increase;
    printf("New price is %4.2f\n",new_price);
    /* output : new price is 19.50 */
    return 0;
}
