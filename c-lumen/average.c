#include <stdio.h>
int main()
{
    float average(float a[10]);
    float score[10], aver;
    int i;
    printf("input 10 scores:\n");
    for (i = 0; i < 10; i++) {
        scanf("%f", &score[i]);
    }
    printf("\n");
    aver = average(score);
    printf("average score is %5.2f\n", aver);

    return 0;
}

float average(float a[10])
{
    int i;
    float aver, sum = a[0];
    for (i = 0; i < 10; i++) {
        sum += a[i];
    }
    return sum/10;
}
