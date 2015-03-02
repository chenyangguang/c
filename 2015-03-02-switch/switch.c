// Last Update:2015-03-02 23:40:19
#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    switch(n) /*不能是浮点数,应该是整数*/
    {
        case 1: printf("50"); break;
        case 2: printf("60"); break;
        case 3: printf("70"); break;
        case 4: printf("80"); break;
        default : printf("请输入1-4"); break;
    }
    return 0;
}
