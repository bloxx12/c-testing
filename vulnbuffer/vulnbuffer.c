#include <stdio.h>

void echo() {
  char buf[4]; // too small!
  gets(buf);
  puts(buf);
}

int main() {
  printf("Type a string: ");
  echo();
  return 0;
}
