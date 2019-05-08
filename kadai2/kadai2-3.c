/*
  a, b, c を入力として受け付け，2次方程式 ax^2 + bx + c = 0 の解を求める．
  重解及び複素解に完全対応．
  以下の入力に対しては，計算せずにエラーを出力する．
  - 数字以外の入力
  - a == 0
*/

#include <math.h>
#include <stdio.h>

int main(void) {
  double a, b, c;
  a = b = c = nan("");

// 不正入力対策
#define SCAN_A_NUM(var) \
  do { \
    if (scanf("%lf", &var) != 1) { \
      scanf("%*[^\n]"); \
      getchar(); \
    } \
  } while (0)

  printf("a = ");
  SCAN_A_NUM(a);
  printf("b = ");
  SCAN_A_NUM(b);
  printf("c = ");
  SCAN_A_NUM(c);

#undef SCAN_A_NUM

  // nan, inf, a == 0 をはじく
  if (!(isnormal(a) && isfinite(b) && isfinite(c))) {
    fprintf(stderr, "invalid input\n");
    return 1;
  }

  // 判別式D < 0 のとき複素解のフラグを立てる
  double D = b * b - 4 * a * c;
  unsigned iflag = 0;
  if (D < 0) {
    D = -D; // 虚部の計算のために D > 0 にする
    iflag = 1;
  }

  double tmp = 2 * a;
  double Re = -b / tmp;
  double Im = sqrt(D) / tmp;

  if (!Im) {
    // 重解
    printf("%g\n", Re);
  } else if (iflag) {
    if (b) {
      printf("%g + %gi\n%g - %gi\n", Re, Im, Re, Im);
    } else {
      // b = 0 のとき純虚数
      printf("%gi\n-%gi\n", Im, Im);
    }
  } else {
    printf("%g\n%g\n", Re + Im, Re - Im);
  }

  return 0;
}
