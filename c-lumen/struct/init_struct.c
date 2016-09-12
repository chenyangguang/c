#include<stdio.h>

struct {
  char *name;
  int num;
  int age;
  char group;
  float score;
}class[] = {
  {"LiLi",5,20,'D',122.0},
  {"DengYap",3,19,'B', 133.0},
  {"LiuJun", 2, 23,'A', 122.5},
  {"Yige", 1, 17,'C', 150},
  {"WangCai",4, 16,'B', 90}
}; // 分号

int main()
{
  int i,num_test = 0;
  float avg, sum = 0;
  for(i=0; i<5; i++){
    sum += class[i].score;
    if(class[i].score < 140) num_test++;
  }
  printf("sum=%.2f\navg=%.2f\nnum_test=%d\n", sum, sum/5, num_test);
  return 0;
}
