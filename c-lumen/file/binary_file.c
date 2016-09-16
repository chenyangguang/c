/*
 * =====================================================================================
 *
 *       Filename:  binary_file.c
 *
 *    Description:  从磁盘输入 10 个学生的数据，转存至磁盘文件中
 *
 *        Version:  1.0
 *        Created:  09/16/2016 10:54:28 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  chenyangguang
 *
 * =====================================================================================
 */

#include<stdio.h>

#define SIZE 5

struct Student{
    char name[10];
    int num;
    int age;
    char addr[10];
}stu[SIZE];

void save(){
    FILE *fp;
    int i;
    fp = fopen("stu.dat", "wb");
    if(fp == NULL){
        printf("Can't not open file\n");
        return;
    }
    for(i=0; i<SIZE; i++){
        if(fwrite(&stu[i], sizeof(struct Student), 1, fp) != 1)
            printf("file write error\n");
    }
    fclose(fp);
}

int main()
{
    int i;
    printf("Please enter data of students:\n");
    for(i=0; i<SIZE; i++){
        scanf("%s%d%d%s", stu[i].name, &stu[i].num, &stu[i].age, stu[i].addr);
    }
    save();
    
    return 0;
}
