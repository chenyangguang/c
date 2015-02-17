// Last Update:2015-02-17 07:41:34
#include <stdio.h>
int main()
{
    unsigned int i = 0, k = -5; //unsigned
    short n = 2;
    long j = 10;
    char ch = 'a'; //'', ""
    double db = 5.5;
    float fd = 15.5; 

    char a[] = "chenyangguang"; //array
    char b[] = "chenyang\0guang"; //stop to \0

    //k = 10;
    //printf("%d\n", k);
    //printf("%.1f\n", db); //
    //printf("%c\n", ch);
    //scanf("%d", &k); //& address
    //printf("%u\n", k);
    
    printf("%s\n", a);
    printf("%s\n", b);
    return 0;
}
