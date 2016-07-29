#include <stdio.h>
int main()
{
    void swap(int *p1, int *p2);
    int a, b;
    int * pointerOne, * pointerTwo;
    printf("please enter a and b:");
    scanf("%d, %d\n", &a,&b);
    pointerOne = &a;
    pointerTwo = &b;
    if (a < b) {
        swap(pointerOne, pointerTwo);
    }
    printf("max=%d, min=%d\n", a, b);

    return 0;
}

void swap(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

