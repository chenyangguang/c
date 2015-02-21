// Last Update:2015-02-18 08:09:21
#include <stdio.h>
int main()
{
    int n = 0;
    char str[512] = "";
    printf("%s\n", "please input a string:");
    scanf("%d%s", &n,  str); //array, itself is the address , so don't need '&';
    printf("you put in is: %d\n%s\n", n, str); //give the name, not address
    return 0;
}
