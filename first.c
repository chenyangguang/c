#include<stdio.h> //包含stdio.h头文件
int max(int, int); //函数声明
int main(){
    int a,b,n; //声明两个整形变量
    printf("Input two integers: "); //以空格为分隔
    //以'|'为分隔符， 将输入的两个整形分别赋予a,b
    scanf("%d|%d", &a, &b);
    //以整形输出a,b和最大值，a,b,max(a,b)为参数列表
    n = max(a,b);
    printf("The max between %d and %d is %d.\n", a,b,n);
    return 0;
}
//函数定义
int max(int num1, int num2){
    if (num1>num2) {
        return num1;
    }else{
        return num2;
    }
}
