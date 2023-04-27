#include "s21_math.h"

double s21_trunc(double x) {
  double dx = x - (long long int)x;
  return x - dx;
}

long double s21_fmod(double x, double y) {
  long double res = x - s21_trunc(x / y) * y;
  if (s21_fabs(x) < S21_EPS) res = 0;
  if (is_inf(y)) res = x;
  if (is_nan(x) || is_nan(y) || is_inf(x) || s21_fabs(y) < S21_EPS ||
      (is_inf(x) && is_inf(y)))
    res = S21_NAN;
  return res;
}
