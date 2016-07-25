#include <stdio.h>
int main()
{
    int max_val(int array[][4]);
    int a[3][4] = {
        {2, 8, 3, 6}, 
        {3, 9, 5, 4}, 
        {2, 4, 7, 1}
    };
    printf("Max value is %d\n", max_val(a));

    return 0;
}

int max_val(int array[][4])
{
    int i, j, max;
    max = array[0][0];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            if(array[i][j] > max) max = array[i][j];
        }
    }

    return (max);
}
