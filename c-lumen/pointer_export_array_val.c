#include <stdio.h>
int main()
{
    int i, a[10], *p = a; // p指向a[0]
    printf("please enter 10 ineger numbers:");
    for (i = 0; i < 10; i++) {
        scanf("%d", p++);
    }

    p = a; // 重新是p指向a[0]
    for (i = 0; i < 10; i++) {
        printf("%d\n", *p++);
    }
    printf("\n");

    return 0;
}
