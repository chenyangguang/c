#include <stdio.h>
int main()
{
    // 三个人，各学４门课，计算平均分和第n个学生的成绩
    void ave(float *p, int n);
    void search(float (*p)[4], int n);
    float score[3][4] = {
        {43, 44, 45},
        {55, 56, 57},
        {67, 68, 69}
    };
    ave(* score, 12);
    search(score, 2);

    return 0;
}

void ave(float * p, int n)
{
    float *p_end_position;
    float sum = 0, average;
    p_end_position = p + n - 1;
    for (; p <= p_end_position; p++) {
        sum += * p;
        average = sum / n;
    }
    printf("average=%5.2f\n", average);
}

void search(float (* p)[4], int n)
{
    int i;
    printf("The score of No.%d are :\n", n);
    for (i = 0; i < 4; i++) {
        printf("%5.2f", * (* (p + n) + i));
    }
    printf("\n");
}
