#include "s21_math.h"

long double s21_sqrt(double x) {
  double l = 0;
  double m = 1;
  if (x < 0) {
    m = S21_NAN;
  } else if (is_nan(x)) {
    m = S21_NAN;
  } else if (x == S21_POSITIVE_INF) {
    m = S21_POSITIVE_INF;
  } else {
    while (s21_fabs(m - l) > S21_EPS) {
      l = m;
      m = ((x / m) + m) / 2;
    }
  }
  return m;
}
