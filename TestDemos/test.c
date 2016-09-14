// Last Update:2015-02-21 11:10:25
#include <stdio.h>
int main()
{
    int i = 0;
    i += 3; //比 i = i + 3;更高效
    printf("%d\n", i);

    i *= 3;
    printf("%d\n", i);

    i %= 4;
    printf("%d\n", i);

    return 0;
}
