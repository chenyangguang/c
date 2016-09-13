#include <stdio.h>

int main()
{
    char *string = "Test String";
    int length = strlen(string), i;

    printf("%s\n", string);

    // use *(string+i)
    for(i=0; i<length; i++){
      printf("%c", *(string+i));
    }
    printf("\n");

    // use string[i]
    for(i=0; i<length; i++){
      printf("%c", string[i]);
    }

    return 0;
}
