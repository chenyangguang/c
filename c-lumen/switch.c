#include <stdio.h>
int main()
{
    void actionTest(int, int, int);
    char grade;
    scanf("%c", &grade);
    printf("你的高考成绩是:");
    switch(grade)
    {
        case '语文': printf("85~100\n");break;
        case '数据': printf("70~84\n");break;
        case '英语': printf("60~69\n");break;
        case '文综': printf("<60\n");break;
        case '李宗': actionTest(90,70,90);break;
        default: printf("enter data error\n");break;
    }

    return 0;
}

void actionTest(int x, int y, int z){
    printf("x+y+z=%d\n", x+y+z);
}
