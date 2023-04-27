#include "s21_math.h"

long double s21_exp(double x) {
  long double new_value = 1;
  long double sum = 1;
  long double i = 1;
  if (x == x) {
    if (x == S21_POSITIVE_INF) {
      sum = S21_POSITIVE_INF;
    } else if (x == S21_NEGATIVE_INF) {
      sum = 0.0;
    } else {
      while (s21_fabs(new_value) > S21_EPS) {
        new_value *= x / i;
        i++;
        sum += new_value;
        if (sum > DBL_MAX) {
          sum = S21_POSITIVE_INF;
          break;
        }
      }
      if ((sum == S21_POSITIVE_INF && x < 0.0) || sum < 0.0) sum = 0.0;
    }
  } else {
    sum = S21_NAN;
  }
  return sum;
}
