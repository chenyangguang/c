// Last Update:2015-02-21 11:31:04
#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch>='a' && ch<='z') {
        printf(" 您输入的字符%c是小写字母\n", ch);
    }else {
        printf(" 您输入的字符%c是大写字母\n", ch);
    }

}
