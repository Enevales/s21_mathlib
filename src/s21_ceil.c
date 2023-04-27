#include "s21_math.h"

long double s21_ceil(double x) {
  double result;
  int num = x;
  if (is_nan(x)) {
    result = S21_NAN;
  } else if (x == S21_POSITIVE_INF) {
    result = S21_POSITIVE_INF;
  } else if (x == S21_NEGATIVE_INF) {
    result = S21_NEGATIVE_INF;
  } else if (x == num) {
    result = x;
  } else {
    if (x > 0) {
      result = num + 1;
    } else {
      result = num;
    }
  }
  return result;
}
