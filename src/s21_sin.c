#include <math.h>
#include <stdio.h>

#include "s21_math.h"
long double s21_sin(double x) {
  long double sum = 0;
  long double buf;
  int temp = -1;
  int sign = 1;
  if (is_nan(x)) {
    sum = S21_NAN;
  } else if (is_inf(x)) {
    sum = S21_NAN;
  } else {
    if (x < 0) {
      sign = -1;
      buf = -x;
    } else {
      buf = x;
    }

    while (buf > 2 * S21_PI) {
      buf -= 2 * S21_PI;
    }
    long double arg = 1;
    int i = 0;

    while (i < 160) {
      temp *= -1;

      arg = (temp * s21_pow(buf, 1 + 2 * i)) / (s21_factorial(1 + 2 * i));
      sum += arg;
      if (arg < 0) arg = (-1) * arg;
      i++;
    }

    sum = sum * sign;
  }
  return sum;
}
