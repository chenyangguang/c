#include <stdio.h>
int main()
{
    // 求一个输入正整数的阶乘
    int fac(int);
    int n, x;
    printf("enter an interger number:");
    scanf("%d", &n);

    if (n < 0) {
        printf(" n < 0请输入一个正整数!");
    }else{
        x = fac(n);
        printf("%d!=%d\n", n, x);
    }

    return 0;
}

int fac(int n)
{
    return (n == 0 || n == 1) ? 1 : fac(n - 1) * n;
}
