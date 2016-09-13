#include <stdio.h>

int main()
{
    char *string = "Test String";
    int length = strlen(string), i;

    printf("%p\n", string);

    // use *(string+i)
    for(i=0; i<length; i++){
      printf("%c", *(string+i));
    }
    printf("\n");

    // use string[i]
    for(i=0; i<length; i++){
      printf("%c", string[i]);
    }

    return 0;
}

/*
  在编程过程中如果只涉及到对字符串的读取，那么字符数组和字符串常量都能够满足要求；如果有写入（修改）操作，那么只能使用字符数组，不能使用字符串常量。
 */
