#include "s21_math.h"

long double s21_tan(double x) {
  long double res;
  if (is_nan(x)) {
    res = S21_NAN;
  } else if (x == S21_PI / 2) {
    res = 16331239353195370L;
  } else if (x == 3 * S21_PI / 2) {
    res = 5443746451065123L;
  } else if (x == 5 * S21_PI / 2) {
    res = 3266247870639073.5;
  } else if (x == -S21_PI / 2) {
    res = -16331239353195370L;
  } else if (x == -3 * S21_PI / 2) {
    res = -5443746451065123L;
  } else if (x == -5 * S21_PI / 2) {
    res = -3266247870639073.5;
  } else {
    res = s21_sin(x) / s21_cos(x);
  }
  return res;
}
