// Last Update:2015-02-21 10:39:28
#include <stdio.h>
//dowhile先执行后判断条件是否满足
//while先判断条件后执行
int main()
{
    /*
    int i = 0;
    //char ch;
    do {
        //循环体
        printf("%d,", i++);
    } while (i <= 127);
    printf("%d\n", i);//变成了128
    return 0;
    */

    char ch;
    do {
        scanf("%c", &ch);
    } while (ch < 'a' || ch > 'z');
    printf("%c\n", ch - ('a'-'A'));
}
