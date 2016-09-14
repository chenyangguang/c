// Last Update:2015-02-25 13:08:20
#include <stdio.h>
int main()
{
    int i = 0;
    while (i < 100) {
        i++;

        /*if (i%2 == 0) {*/
            /*continue; //停止当前循环*/
        /*}*/

        if (i == 50) {
            printf("%d\n", i);
            break; //停止整个循环
        }
        printf("%d\n", i);
    } return 0;
}
