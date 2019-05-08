#include <limits.h>
#include <stdio.h>

int main(void) {
  int n = INT_MIN;
  printf("n = ");
  scanf("%d", &n);
  if (n < 0 || n > 12) {
    fprintf(stderr, "Variable n MUST be in range [0, 12], because only "
                    "32-bit signed int is supported.\n");
    return 1;
  } else if (!n) {
    printf("n! = 1\n");
    return 0;
  }

  int prod = n;
  for (; --n; prod *= n) {
  }
  printf("n! = %d\n", prod);

  return 0;
}
