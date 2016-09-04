#include <stdio.h>
int main()
{
    int max(int, int);
    int (* p)(int,int); // 定义指向函数的指针变量p
    int a, b, c;
    p = max;
    printf("please enter a and b:");
    scanf("%d,%d", &a, &b);
    c = (*p)(a, b);
    printf("a=%d\nb=%d\nmax=%d\n", a,b,c);

    return 0;
}

int max (int x, int y)
{
    int z;

    return x > y ? x : y;
}
