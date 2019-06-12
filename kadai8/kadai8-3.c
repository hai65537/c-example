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

void ScaleVector(Vector2d *vec, double scale) {
  vec->x *= scale;
  vec->y *= scale;
}

int main(void) {
  Vector2d v;
  double s;
  printf("Input 2D Vector: ");
  if (scanf("%lf%lf", &v.x, &v.y) != 2) {
    abort();
  }
  printf("Input scale value: ");
  if (scanf("%lf", &s) != 1) {
    abort();
  }

  ScaleVector(&v, s);
  printf("Result: %.1f %.1f\n", v.x, v.y);
  printf("Length: %.1f\n", GetLength(&v));
  return 0;
}
