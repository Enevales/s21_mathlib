#include "s21_math.h"

long double s21_floor(double x) {
  long double result;
  if (x == x) {
    if (x == S21_POSITIVE_INF) {
      result = S21_POSITIVE_INF;
    } else if (x == S21_NEGATIVE_INF) {
      result = S21_NEGATIVE_INF;
    } else {
      if (x - (long long)x != 0) {
        result = x >= 0 ? (long long)x : (long long)(x - 1);
      } else {
        result = x;
      }
    }
  } else {
    result = S21_NAN;
  }
  return result;
}
