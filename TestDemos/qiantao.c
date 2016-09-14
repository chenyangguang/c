// Last Update:2015-02-21 11:21:46
#include <stdio.h>
int main()
{
    int i = 1, j = 1;
    for (i = 1; i < 10; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d*%d=", i,j);
            printf("%d   ", i*j);
        }
        printf(" \n");
    }
    return 0;
}
