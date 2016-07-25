#include <stdio.h>
int main()
{
    // method 1:
    int i = 1, sum = 0;
    printf("please enter i,i=?");
    scanf("%d", &i);
    while (i <= 100) {
        sum += i;
        i++;
    }

    /* method 2:
     * do {
     * sum += i;
     * i++;
     } while (i<=100);
     * */

    //method 3:
    /*for (i = 0; i < 100; i++) {
        sum += i;
    }*/
    printf("sum=%d\n", sum);
    return 0;
}
