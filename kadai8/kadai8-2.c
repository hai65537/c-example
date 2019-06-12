#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct _Vector2d {
  double x;
  double y;
} Vector2d;

double GetLength(Vector2d *vec) {
  return sqrt(vec->x * vec->x + vec->y * vec->y);
}

int main(void) {
  Vector2d vec;
  printf("Input 2D Vector: ");
  if (scanf("%lf%lf", &vec.x, &vec.y) != 2) {
    abort();
  }
  printf("Length: %.1f\n", GetLength(&vec));
  return 0;
}
