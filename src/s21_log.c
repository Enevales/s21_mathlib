#include "s21_math.h"

long double s21_log(double x) {
  long double res = 0;
  if (is_nan(x) || x == S21_NEGATIVE_INF) {
    res = S21_NAN;
  } else if (is_inf(x)) {
    res = S21_POSITIVE_INF;
  } else if (x == 0.) {
    res = S21_NEGATIVE_INF;
  } else if (x >= 1) {
    while (s21_fabs(s21_exp(res) - x) > 1e-7) {
      res = res + 2 * ((x - s21_exp(res)) / (x + s21_exp(res)));
    }
  } else {
    x = 1. / x;
    for (int i = 0; i < 100; i++) {
      res = res + 2 * (x - s21_exp(res)) / (x + s21_exp(res));
    }
    res *= -1;
  }
  return res;
}
