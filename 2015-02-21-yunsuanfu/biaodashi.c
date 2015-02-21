// Last Update:2015-02-21 09:33:49
#include <stdio.h>
int main()
{
    /*
    int a = 0, b = 0;
    a = (b = b + 1, b - 2, b);
    printf("%d\n", a);
    //printf("%d\n", 4+7);
    */

    //自动类型转换
    int i;
    char j;
    float f;
    i = 98;
    j = 97;
    f = 100.55;
    i = f;
    printf("%d\n", i);
    printf("%c\n", j);
    printf("%f\n", f);
    
    printf("%s\n", "================");
    //强制类型转换
    int x;
    x = 100;
    printf("%f\n", (float)x/3);
    return 0;
}
