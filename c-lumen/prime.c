#include <stdio.h>
#include <math.h>
int main()
{
    // 求大于２的一个整数是否是素数
    // 判断方法：　
    // n被2~(n-1)范围内的各整数去除
    int n, i;
    printf("请输入一个整数\n");
    scanf("%d", &n);
    for (i = 2; i <= n - 1; i++) {
        if (n % i == 0)  break; 
    }

    if (i < n) printf("%d 不是一个素数\n", n);  
    else printf("%d 是素数\n", n); 
    // 判断方法二
    // 2~n/2之间的整数除

    // 判断方法３　
    // ２～根号n之间的整数即可

    int x,y,z;
    printf("输入一个整数: x=?");
    scanf("%d", &x);
    z = sqrt(x);
    for (y = 2; y <= z; y++) {
        if (x % y == 0) break; 
    }
    if (y <= z) {
        printf("%d 不是一个素数.\n", x);
    }else {
        printf("%d 是一个素数\n", x);
    }
    
    return 0;
}
