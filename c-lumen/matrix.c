#include <stdio.h>
int main()
{
    // 转置矩阵
    int a[2][3] = {{1,2,3},{4,5,6}};
    int b[3][2],i,j;

    printf("矩阵a:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%5d", a[i][j]);
            b[j][i] = a[i][j];
        }
        printf("\n");
    }
    printf("矩阵b:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%5d", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
