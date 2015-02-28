// Last Update:2015-02-21 11:30:26
#include <stdio.h>
int main()
{
    //
    if (1 < 2/* condition */) {
        /* code */
        printf("%s\n", "www.gitvim.com");
    }

    if (1 < 3/* condition */)  printf("%s\n", "go");/* oneline play */ 

    char ch;
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z') {
        printf("您输入的字符%c是小写字母\n", ch);
    }
    return 0;
}
