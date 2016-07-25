#include <stdio.h>
int main()
{
    int year,leap;
    printf("enter year:");
    scanf("%d", &year);

    if (year % 4 != 0) {
        leap = 0;
    }else {
        leap = (year % 100 != 0) ? 1 : ((year % 400 != 0) ? 0 : 1);
        /*if (year % 100 != 0){
            leap = 1;
        }else {
            leap = (year % 400 != 0) ? 0 : 1;
        }*/
    }

    // or simpler like this
    /* 
     * leap = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? 1 : 0;
     */

    if (leap) {
        printf("%d is ", year);
    }else {
        printf("%d is not ", year);
    }
    printf("a leap year.\n");

    return 0;
}
