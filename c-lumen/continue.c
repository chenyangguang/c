#include <stdio.h>
int main()
{
    int i;
    for (i = 200; i < 300; i++) {
        if (i % 3) {
            printf("%d\n", i);
        }else {
            continue;
        }
    }
    printf("\n");

    /* 4*5 */
    int m,n, x=0;
    for (m = 1; m <= 4; m++) {
        for (n = 1; n <= 5; n++, x++) {
            if (x % 5 == 0) {
                printf("\n");
            }
            printf("%d\t", m*n);
        }
    }
    printf("\n");
    return 0;
}
