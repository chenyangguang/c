#include <stdio.h>

union data{
  int x;
  char y;
  short z;
};

int main(){
  union data a;
  printf("%d, %d\n", sizeof(a), sizeof(union data));
  a.x = 0x40;
  printf("%X, %c, %hX\n", a.x, a.y, a.z);
  a.y = '10';
  printf("%X, %c, %hX\n", a.x, a.y, a.z);
  a.z = 0x2059;
  printf("%X, %c, %hX\n", a.x, a.y, a.z);
  a.x = 0x3E25AD54;
  printf("%X, %c, %hX\n", a.x, a.y, a.z);

  return 0;
}
