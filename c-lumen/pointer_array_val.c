#include <stdio.h>
int main()
{
    // 指针变量指向数组元素
    int a[10];
    int *p, i;
    printf("please enter 10 integer numbers:");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    for (p = a; p < (a + 10); p++) {
        printf("%d\n", *p);
    }
    printf("\n");

    return 0;
}
