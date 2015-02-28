// Last Update:2015-02-21 11:02:50
#include <stdio.h>
int main()
{
    //&&与 条件1, 条件2
    //并联电路
    if (1 < 2 && 8 > 7) {
        printf("%s\n", "okok, true");
    }

    //串联电路
    if (1>2 || 8 < 10) {
        printf("onimak\n");
    }

    //单刀
    if (!(1>2)) {
        printf("%s\n", "1大于2?no!");
    }
    return 0;
}
