#include <stdio.h>

#include "myfunc.h"
#include "newfunc.h"


int main()
{
    values val;
    double a;
    double b;
    double c;
    printf("Enter \n");
    scanf("%lf %lf %lf", &a, &b, &c);
    val = newfunc(a, b, c);
    if (val.flag == 2) printf("Solved: x1 = %.2lf, x2 = %.2lf \n", val.x1, val.x2);
    return 0;
}
