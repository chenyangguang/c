#include <stdio.h>
int main()
{
    // 数组名作函数参数, 最平均值
    float average(float array[10]);
    float score[10], ave;
    int i;
    printf("input 10 scores:\n");

    for (i = 0; i < 10; i++) {
        scanf("%f", &score[i]);
    }
    printf("\n");
    ave = average(score);
    printf("average score is %5.2f\n", ave);

    return 0;
}

float average(float array[10])
{
    int i;
    float sum = array[0];
    for (i = 0; i < 10; i++) {
        sum += array[i];
    }
    return sum / 10;
}
