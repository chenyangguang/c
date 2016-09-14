// Last Update:2015-02-21 09:39:25
#include <stdio.h>
int main()
{
    //循环是为了减少不必要的代码
    int i = 1;
    while (i <= 100000000000) {
        printf("%d,", i);
        i++;
    }
    return 0;
}
