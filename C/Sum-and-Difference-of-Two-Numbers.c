#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

    int a, b, sum, diff;
    float c, d, fsum, fdiff;

    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);

    sum = a+b;
    diff = a-b;

    fsum = c+d;
    fdiff = c-d;

    printf("%d %d\n", sum, diff);
    printf("%.1f %.1f", fsum, fdiff );

    return 0;
}