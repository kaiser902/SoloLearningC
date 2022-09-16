#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    double nbr1,nbr2;
    printf("Enter an operator (+, -, *, /): \n");
    scanf("%c",&op);
    printf("Enter two operands: \n");
    scanf("%lf %lf",&nbr1,&nbr2);
    switch(op)
    {
         case '+':
            printf("%.1lf + %.1lf = %.1lf",nbr1, nbr2, nbr1+nbr2);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf",nbr1, nbr2, nbr1-nbr2);
            break;

        case '*':

            printf("%.1lf * %.1lf = %.1lf",nbr1, nbr2, nbr1*nbr2);
            break;

        case '/':
             if (nbr2 != 0)
            {
            printf("%.1lf / %.1lf = %.1lf",nbr1, nbr2, nbr1/nbr2);
              break;
            }
            else
                printf("Cannot diveded by zero \n");
            break;


        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
    }

    return 0;
}
