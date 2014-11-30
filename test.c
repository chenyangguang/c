// Last Update:2014-11-17 23:28:57
#include<stdio.h>
int main(void)
{
    //printf("\n\n%d, %d\n", 20/7, -20/7);
    //printf("%f, %f\n", 20.0/7, -20.0/7);
    //printf("%d\n", 100%3); //1

    /*
       int i=5, j=5, p,q;
       p=(i++)+(i++)+(i++);
       q=(++j)+(++j)+(++j);
       printf("p=%d, q=%d, i=%d,j=%d", p,q,i,j);
       */

    /*int a,b = 322;
      float x, y = 8.88;
      char c1='k', c2;
      a=y;
      x=b;
      a=c1;
      c2=b;
      printf("a=%d, x=%f, c1=%d, c2=%c", a,x,c1,c2);*/


    /*int a=2, b=4, c=6, x,y;
      y = (x=a+b,b+c);
      printf("y=%d, x=%d\n",y,x);*/

    //goto语句
    /*int i,sum = 0;
      i = 1;
    loop: if (i<=100) {
    sum = sum+i;
    i++;
    goto loop;
    }
    printf("%d\n", sum);*/

    //while
    /*int i,sum = 0;
    i=1;
    while (i <= 100) {
        sum = sum + i;
        i++;
    }
    printf("%d\n", sum);*/

    //while
    /*int a = 0,n;
    printf("\n input in : ");
    scanf("%d", &n);
    while (n--) {
        printf("%d ", a++*2);
    }*/

    //do-while
    /*int i,sum = 0;
    i = 1;
    do {
        sum = sum+i;
        i++;        
    } while (i<=100);
    printf("%d\n", sum);*/

    //while 与do-while区别
    /*int sum = 0, i;*/
    /*scanf("%d", &i);*/
    /*while (i<=10) {*/
        /*sum = sum+i;*/
        /*i++;    */
    /*}*/
    /*printf("sum=%d", sum);*/

    /*int sum = 0,i;
    scanf("%d", &i);
    do {
        sum = sum+i;
        i++;
    } while (i<=10);
    printf("sum = %d", sum);*/

    //for
    /*int i, j, k;
    printf("i j k\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                printf("%d %d %d\n", i,j,k);
            }
        }
    }*/

    //continue
    /*
    char c;
    while (c!=13) {
        c=getch(); //implicit declaration of function/
        if (c==0X1B) {
            continue;
        }
            printf("%c\n", c);
    }
    */


    /*double p=0, j=1;
    int i;
    for (i = 1; i < 10000; i++) {
        j = pow(-1.0,i+1)/(2*i-1); //mplicit declaration of function/
        p+= j;
        printf("%lf\n", 4*p);
    }
    printf("%lf\n", 4*p);*/


    /*int m, i, k;
    printf("Input your number: ");
    scanf("%d", &m);
    k = sqrt(m); //implicit declaration of function 
    for (i = 2; i <= k; i++) {
        if (m%i==0) {
            break;
        }
    }
    if (i>=k+1) {
        printf("%d is a prime number\n", m);
    }else{
        printf("%d is not a prime number\n", m);
    }*/

    //for循环为一个数组赋值，并倒序取出
    /*int i,a[10];
    for (i = 0; i < 10; i++) {
        a[i] = i;
    }
    for (i = 9; i >= 0; i--) {
        printf("%d", a[i]);
    }*/

    //输入10个数字并输出最大值
    int i,max, a[10];
    printf("input 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i = 1; i < 10; i++) {
        if (a[i]>max) {
            max = a[i];
        }
    }
    printf("maxmum=%d\n", max);
    return 0;
}
