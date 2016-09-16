/*
 * =====================================================================================
 *
 *       Filename:  fgets.c
 *
 *    Description:  从磁盘读入若干字符串，对它们按字母大小的顺序排序，然后把排好序的字符串写入磁盘文件中
 *
 *        Version:  1.0
 *        Created:  09/16/2016 10:19:01 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (chenyangguang), 
 *   Organization:  
 ""*
 * =====================================================================================
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fp;
    char str[3][10], temp[10];
    int i, j, k, n=3;
    printf("Enter strings:\n");
    for(i=0; i<n; i++) {
        gets(str[i]);
    }

    for(i=0; i<n-1; i++) {
        k = i;
        for(j=i+1; j<n; j++){
            if(strcmp(str[k], str[j]) > 0) k = j;
        }
        if(k != i){
            strcpy(temp, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], temp);
        }
        fp = fopen("test.md", "w");
        if(fp == NULL){
            printf("Can't open file !\n");
            exit(0);
        }
        printf("\nThe new sequence:\n");
        for(i=0; i<n; i++){
            fputs(str[i], fp);
            fputs("\n", fp);
            printf("%s\n", str[i]);
        }
    }
    
    return 0;
}


