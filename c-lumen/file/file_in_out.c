/*
 * =====================================================================================
 *
 *       Filename:  file_in_out.c
 *
 *    Description:  将一个磁盘文件中的信息复制到另一个磁盘文件中。具体到现在是让test.md的文件内容复制到另一个磁盘文件test.org中
 *
 *        Version:  1.0
 *        Created:  09/16/2016 10:03:19 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (chenyangguang), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *in, *out;
    char ch, infile[10], outfile[10];
    printf("enter the name of in_file:");
    scanf("%s", infile);

    printf("enter the name of out_file:");
    scanf("%s", outfile);

    in  = fopen(infile, "r");
    out = fopen(outfile, "w");
    if(NULL == out | NULL == in)
    {
        printf("Can't open the \n");
    }

    while(!feof(in))
    {
        ch = fgetc(in);
        fputc(ch, out);
        putchar(ch); // display on the screen
    }
    putchar(10); // \n after display all the char
    fclose(in);
    fclose(out);

    return 0;
}
