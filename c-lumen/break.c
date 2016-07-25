#include <stdio.h>
#define SUM 100000
int main()
{
    float amount, ave, total;
    int i;
    for (i = 0, total=0; i < 1000; i++) {
        printf("please enter amount:");
        scanf("%f", &amount);
        total += amount;

        if(total>=SUM)  {break;} 
    }
    ave = total/i;
    printf("num=%d\nave=%10.2f\n", i, ave);

    return 0;
}
