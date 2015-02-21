// Last Update:2015-02-18 08:30:26

#include <stdio.h>
int main()
{
    printf("%10d  %10d  %10d\n", 123, 234, 12345);
    printf("%10d  %10d  %10d\n", 123735, 2323232, 12345);
    printf("%10d  %10d  %10d\n", 12378, 23432, 12345);
    printf("%10d  %10d  %10d\n", 1234, 234, 834212345);
    printf("%10d  %10d  %10d\n", 12398, 434234, 12345);

    printf("%08d  %08d  %08d\n", 123, 234, 12345);
    printf("%08d  %08d  %08d\n", 123735, 2323232, 12345);
    printf("%08d  %08d  %08d\n", 12378, 23432, 12345);
    printf("%08d  %08d  %08d\n", 1234, 234, 834212345);
    printf("%08d  %08d  %08d\n", 12398, 434234, 12345);

    printf("%-10d  %-10d  %-10d\n", 123, 234, 12345);
    printf("%-10d  %-10d  %-10d\n", 123735, 2323232, 12345);
    printf("%-10d  %-10d  %-10d\n", 12378, 23432, 12345);
    printf("%-10d  %-10d  %-10d\n", 1234, 234, 834212345);
    printf("%-10d  %-10d  %-10d\n", 12398, 434234, 12345);

    printf("%02d, %02d, %02d\n", 1, 2, 10);
    int a, b, c;
    printf("please input  two number:\n");
    scanf("%d*%d=", &a, &b); //between %d%d you have to input for init model
    c = a + b;
    printf("%d+%d=%d", a, b, c);
    return 0;
}
