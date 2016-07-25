#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,s,area;
    a = 3.20;
    b = 4.89;
    c = 32.98;
    s=(a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("a=%f\tb=%f\tc=%fn", a, b, c);
    printf("area=%f\n", area);
    return 0;
}
