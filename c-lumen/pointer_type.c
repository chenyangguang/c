#include <stdio.h>

int main()
{
  int a = 10, *pa = &a, *paa = &a;
  double b = 99.9, *pb = &b;
  char c = '@', *pc = &c;

  printf("&a=%#X, &b=%#X, &c=%#X\n", &a, &b, &c);
  printf("pa=%#X, pb=%#X, pc=%#X\n", pa, pb, pc);

  return 0;
}
