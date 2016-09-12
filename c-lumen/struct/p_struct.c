#include<stdio.h>
#include<string.h>

struct stu
{
  char *name;
  int num;
  int age;
  char group;
  float score;
}stus[] = {
  {"Huang", 1, 11, 'C', 150.0},
  {"Chen", 5, 17, 'C', 145.0},
  {"Huang", 2, 18, 'd', 122.0},
  {"Li", 3, 16, 'b', 133.0},
  {"He", 4, 19, 'a', 111.0},
}, *ps;

int main()
{
  int len = sizeof(stus)/sizeof(struct stu);
  printf("Name\t\tNum\tAge\tGroup\tscore\t\n");
  for(ps = stus; ps < stus+len; ps++)
    {
      printf("%s\t%d\t%d\t%c\t%.1f\n", ps->name, ps->num, ps->age, ps->group, ps->score);
    }
  return 0;
}
