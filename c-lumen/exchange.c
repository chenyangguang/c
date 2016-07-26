#include <stdio.h>
int main()
{
    // 三个数从大到小输出
    void exchange(int *e1, int *e2, int *e3;);
    int a, b, c, *p1, *p2, *p3;
    printf("please enter three numbers:");
    scanf("%d, %d, %d\n", &a, &b, &c);
    p1 = &a;
    p2 = &b;
    p3 = &c;
    exchange(p1, p2, p3);
    printf("The order is: %d, %d, %d\n", a, b, c);

    return 0;
}

void exchange(int *e1, int *e2, int *e3)
{
    void swap(int *s1, int *s2);
    if (*e1 < *e2) swap(e1, e2);
    if (*e1 < *e3) swap(e1, e3);
    if (*e2 < *e3) swap(e2, e3);
}

void swap(int *s1, int *s2)
{
    int temp;
    temp = *s1;
    *s1  = *s2;
    *s2  = temp;
}
