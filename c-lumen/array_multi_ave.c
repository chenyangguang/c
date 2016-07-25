#include <stdio.h>
int main()
{
    // 用函数名作函数实参时，
    // 不是把数组元素的值传递给形参，而是把实参数组的首元素的地址传递给形参数组，
    // 这样两个数组就共用一段内存单元。
    float average(float array[], int n);
    float scoreOne[5] = {99.5, 343, 34.8, 33, 222.5};
    float scoreTwo[10] = {1, 2, 3, 33, 5, 222, 89, 23, 43, 89};
    printf("The average of class A is %6.2f\n", average(scoreOne, 5));
    printf("The average of class B is %6.2f\n", average(scoreTwo, 10));

    return 0;
}

float average(float array[], int n)
{
    int i, sum;
    for (i = 0; i < n; i++) {
        sum += array[i];
    }

    return sum / n;
}
