// #include "foo.c"
#include <stdio.h>

extern void foo();
int i = 0;
int main() {
  foo();
  return 0;
}
