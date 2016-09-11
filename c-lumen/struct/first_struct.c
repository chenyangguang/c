#include<stdio.h>
int main()
{
  struct Student
  {
    int num;
    char name[20];
    char sex;
    char addr[20];
  } a={101, "Lili", 'M', "shenzhen China"};
  printf("No:%1d\nname:%s\nsex:%c\naddress:%s\n", a.num, a.name, a.sex, a.addr);
  return 0;
}
