#include "s21_math.h"

long double s21_factorial(int n) {
  long double res;
  if (n < 0) {
    res = 0;
  } else if (n == 0) {
    res = 1;
  } else {
    res = n * s21_factorial(n - 1);
  }
  return res;
}

long double s21_cos(double x) {
  long double sum = 0;
  long double buf;
  int temp = -1;
  if (is_nan(x)) {
    sum = S21_NAN;
  } else if (is_inf(x)) {
    sum = S21_NAN;
  } else {
    if (x < 0) {
      buf = -x;
    } else {
      buf = x;
    }
    while (buf > 2 * S21_PI) {
      buf -= 2 * S21_PI;
    }
    int i = 0;
    while (i < 180) {
      temp *= -1;
      sum += (temp * s21_pow(buf, 2 * i)) / (s21_factorial(2 * i));
      i++;
    }

    sum = sum;
  }
  return sum;
}
