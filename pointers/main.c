#include <stdio.h>

int main() {
  int lol = 1;
  int lul = 2;
  int lel = 3;
  // array of three int pointers
  int *arr[3];
  // contents of the array

  arr[0] = &lol;
  arr[1] = &lul;
  arr[2] = &lel;
  int **p = &arr[0];

  int c = **(p + 1);
  // int c = **(p);

  printf("%d", c);

  return 0;
}
