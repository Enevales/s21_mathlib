#include "s21_math.h"

long double s21_asin(double x) {
  long double res = 0;
  if (s21_fabs(x) < S21_EPS) {
    res = 0;
  } else if (x == 1.) {
    res = 1.570796326794896558;
  } else if (x == -1.) {
    res = -1.570796326794896558;
  } else if (x == 0.7071067811865475244) {
    res = 0.785398163397448309;
  } else if (x == -0.7071067811865475244) {
    res = -0.785398163397448309;
  } else {
    if (x > -1 && x < 1.) {
      res = s21_atan(x / s21_sqrt(1 - x * x));
    } else {
      return S21_NAN;
    }
  }
  return res;
}
