#include <stdio.h>
int main()
{
    // 数组元素反转
    void inverse(int x[], int n); 
    // void inv(int *x, int n);
    int i, a[] = {3, 7, 9, 11, 0, 6, 7, 5, 4, 2};
    printf("The original array:\n");
    for (i = 0; i < 10; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
    inverse(a, 10);
    printf("The array has been inverted:\n");
    for (i = 0; i < 10; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");

    return 0;
}

void inverse(int x[], int n)
{
    int temp, i, j, m = (n - 1) / 2;
    for (i = 0; i <= m; i++) {
        j = n - 1 - i;
        temp = x[i];
        x[i] = x[j];
        x[j] = temp;
    }
    return ;
}

void inv(int *x, int n)
{
    int *p, temp, *i, *j, m = (n - 1) / 2;
    i = x;
    j = x + n -1;
    p = x + m;
    for (; i <= p; i++) {
        temp = *i;
        *i = *j;
        *j = temp;
    }
    return ;
}

