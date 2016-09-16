/*
 * =====================================================================================
 *
 *       Filename:  fget.c
 *
 *    Description:  从键盘输入一些字符，逐个把它们送到磁盘，知道用户输入一个“#”号结束
 *
 *        Version:  1.0
 *        Created:  09/16/2016 09:39:15 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (chenyangguang), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char ch,filename[10];
    printf("Please input a name of file:");
    scanf("%s", filename);

    fp = fopen(filename, "w"); /* 这两行拆开，否则 warning: assignment makes pointer from integer without a cast */
    if(fp == NULL)
    {
        printf("Can't open the file\n");
        exit(0);
    }
    ch = getchar();
    printf("Please enter a string(end with #): ");
    ch = getchar();
    while(ch != '#')
    {
        fputc(ch, fp);
        putchar(ch);
        ch = getchar();
    }
    fclose(fp);
    putchar(10);

    return 0;
}
