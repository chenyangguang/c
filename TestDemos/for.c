// Last Update:2015-02-21 10:48:32
#include <stdio.h>
int main()
{
    //for初始化-条件->循环体->改变条件-》条件-》循环体
    int i;
    char ch;
    for (i = 33; i < 127; i++) {
        printf("%3d%3c", i, i);
        if ((i + 1) % 10 == 0) { //十个换行
            printf("\n");
        }
    }
    return 0;
}
