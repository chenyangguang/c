#include <stdio.h>

int main()
{
  int a = 10, *pa = &a, *paa = &a;
  double b = 99.9, *pb = &b;
  char c = '@', *pc = &c;

  printf("&a=%p, &b=%p, &c=%p\n", &a, &b, &c);
  printf("pa=%p, pb=%p, pc=%p\n", pa, pb, pc);

  pa++;
  pb++;
  pc++;
  printf("pa=%p, pb=%p, pc=%p\n", pa, pb, pc);

  pa -= 2;
  pb -= 2;
  pc -= 2;
  printf("pa=%p, pb=%p, pc=%p\n", pa, pb, pc);

  if(pa == paa){
    printf("%d\n", *paa);
  }else{
    printf("%d\n", *pa);
  }

  return 0;
}
