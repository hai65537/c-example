#include <stdio.h>

int main(void) {
  float a, b;
  double c, d;

  a = c = 0;
  for (int i = 0; i < 1e8; ++i) {
    a += 1e-8;
    c += 1e-8;
  }
  b = d = 1e-8 * 1e8;

#define PRINT_A_NUM(v) printf(#v " = %.20f\n", v)
  PRINT_A_NUM(a);
  PRINT_A_NUM(b);
  PRINT_A_NUM(c);
  PRINT_A_NUM(d);
#undef PRINT_A_NUM

  return 0;
}
