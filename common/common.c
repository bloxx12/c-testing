#include <stdio.h>

int a = 1;
static int b = 2;
int c = 3;

int main() {
  int c = 4;
  // init();
  printf("a = %d , b = %d, c = %d", a, b, c);
  return 0;
}
