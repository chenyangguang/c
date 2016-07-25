#include <stdio.h>
int main()
{
    // 输入 10 个数，求最大，最小该值位置
    int max(int x, int y);
    int a[10], m, n, i;
    printf("enter 10 integer numbers:");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    printf("\n");
    for (i = 1, m = a[0], n = 0; i < 10; i++) {
        if (max(m, a[i]) > m) {
            m = max(m, a[i]);
            n = i;
        }
    }
    printf("The largest number is %d\n the position is %d.\n", m, n + 1);

    return 0;
}
int max(int x, int y)
{
    return x > y ? x : y;
}
