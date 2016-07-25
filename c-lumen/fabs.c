#include <stdio.h>
#include <math.h>
int main()
{
    /*
     * 求pi值　pi/4 ~ 1-1/3 + 1/5 - 1/7 + ...
     * */
    int sign = 1;
    double pi = 0.0, n = 1.0, term = 1.0;

    while (fabs(term) >= 1e-6) {
        pi += term;
        n +=2;
        sign = -sign;
        term = sign/n;
    }
    pi *= 4;
    printf("pi=%10.8f\n", pi);

    return 0;
}
