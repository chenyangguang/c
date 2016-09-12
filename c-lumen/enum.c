#include <stdio.h>
#define Mon 1
#define Tues 2
#define Wed 3
#define Thurs 4
#define Fri 5
#define Sat 6
#define Sun 7
int main(){
  int day;
  scanf("%d", &day);
  switch(day){
  case Mon: puts("Monday"); break;
  case Tues: puts("Tuesday"); break;
  case Wed: puts("Wednesday"); break;
  case Thurs: puts("Thursday"); break;
  case Fri: puts("Friday"); break;
  case Sat: puts("Saturday"); break;
  case Sun: puts("Sunday"); break;
  default: puts("Error!");
  }
  return 0;
}
