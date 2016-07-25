#include <stdio.h>
int main()
{
    // 递归调用
    int age(int);
    printf("No.5, age: %d\n", age(5));

    return 0;
}

int age(int a)
{
    return a != 1 ? (age(a - 1) + 2) : 10;
}
