#include <stdio.h>
#include <stdlib.h>
typedef struct {
int x;
int y;
} point;
typedef struct {
float radius;
point center;
} circle;
int main()
{
    circle c = {4.5, {1, 3}};
    printf("%3.1f %d,%d\n",c.radius,c.center.x,c.center.y);
    return 0;
}
