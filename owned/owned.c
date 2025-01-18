#include <stdio.h>

void custom_tests(void) {

  char owned[4] = {0, 0, 0, 0};

  // src is 1, dst is 2
  int src_hits = 0;
  int src_misses = 0;
  int dst_hits = 0;
  int dst_misses = 0;

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      // access src[i][j]
      if (owned[i] != 1) {
        owned[i] = 1;
        src_misses++;
      } else {
        src_hits++;
      }
      // access dst[j][i]
      if (owned[j] != 2) {
        owned[j] = 2;
        dst_misses++;
      } else {
        dst_hits++;
      }
    }
  }

  printf("dst hits: %i, dst misses %i\n", dst_hits, dst_misses);
  printf("src hits: %i, src misses %i\n", src_hits, src_misses);
}
int main() {
  custom_tests();
  return 0;
}
