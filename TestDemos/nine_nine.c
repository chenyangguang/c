// Last Update:2014-11-17 21:36:40
#include<stdio.h>
int main (){
    int i, j;
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= i; j++) {
            printf("%-3d", i*j); //-3d表示输出整形，宽度为3个字符,做对齐
        }
        printf("\n");
    }
    return 0;
}
