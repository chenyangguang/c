#include <stdio.h>
int main()
{
    // 求４个数中的最大值
    int max4(int, int, int, int);
    int a, b, c, d, max;
    printf("Please enter 4 interger numbers:");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    max = max4(a, b, c, d);
    printf("max=%d\n", max);

    return 0;
}

int max4(int a,int b,int c,int d)
{
    int max2(int, int);
    return max2(max2(max2(a, b), c), d);
}

int max2(int a, int b)
{
    return a > b ? a : b;
}

