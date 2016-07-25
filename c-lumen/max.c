#include <stdio.h>
#include <string.h>
int main()
{
    // 求三个数中的最大者
    char str[3][20];
    char string[20];
    int i;
    for (i = 0; i < 3; i++) {
        gets str[i];
    }
    if (strcmp(str[0], str[1]) > 0) {
        strcpy(string, str[0]);
    }else {
        strcpy(string, str[1]);
    }
    if (strcmp(str[2], string) > 0) {
        ctrcpy(string, str[2]);
    }
    printf("\n最大的赢家是:\n%s\n", string);

    int max(int x, int y);
    int a,b,c;
    printf("输入两个整数:\n");
    scanf("%d,%d", &a, &b);
    c = max(a, b);
    printf("大的是:%d", c);

    return 0;
}
int max(int x, int y){
    return  x > y ? x : y;
}
