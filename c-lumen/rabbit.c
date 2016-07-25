#include <stdio.h>
int main()
{
    // 求Fibonacci 数列的前４０个数。这个数列有一个特点：第１，２两个数是１，１，。从第３个数开始，该数是其前面两个数之和。
    // 古典的数学问题：有一对兔子，从出生后第３个月起每个月都生一对兔子。小兔子长到第３个月后每个月又生一对兔子。假设所有的兔子不死。求每个月兔子总数是多少?
    int f1 = 1, f2 = 1, f3;
    int i;
    printf("%12d\n%12d\n", f1, f2);
    for (i = 0; i < 38; i++) {
        f3 = f1 + f2;
        printf("%12d\n", f3);
        f1 = f2;
        f2 = f3;
    }

    // 求法二：　循环中一次求出下两个月的兔子数。
    int f7 = 1, f8 = 1;
    int m;
    for (m = 1; m < 20; m++) {
        printf("%12d%12d", f1, f2);
        if (m % 2 == 0) printf("\n"); 
        f7 = f7 + f8;
        f8 = f8 + f7;
    }

    // 数组求法
    int x;
    int a[20] = {1,1};
    for (x = 2; x < 20; x++) 
        a[x] = a[x-2] + a[x-1];
    for (x = 0; x < 20; x++) {
        if (x % 5 == 0)  printf("\n"); 
        printf("%12d", a[x]);
    }
    printf("\n");
    return 0;
}
