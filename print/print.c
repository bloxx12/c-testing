#include <stdio.h>

#define BAR(x) (x + 3)

int main() {
  printf(BAR("HELLO"));
  printf("Normal Hello:"
         "HELLO");
  printf("Hello + 1"
         "%s",
         BAR("HELLO"));
  return 0;
}
