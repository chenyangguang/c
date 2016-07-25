#include <stdio.h>
int main()
{
    // 指针是一个地址，而指针变量是存放地址的变量
    int a = 100, b = 10;
    int * pointerOne, * pointerTwo;
    pointerOne = &a;
    pointerTwo = &b;
    printf("a=%d, b=%d\n", a, b);
    printf("* pointerOne=%d, * pointerTwo=%d\n", * pointerOne, *pointerTwo);
    
    return 0;
}
