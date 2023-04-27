#include "s21_math.h"

long double s21_acos(double x) {
  long double res = 0.;

  if (x == 1.) {
    res = 0;
  } else if (x == -1.) {
    res = S21_PI;
  } else if (x == 0) {
    res = 1.570796326794896558;
  } else if (x == 0.7071067811865475244) {
    res = 0.785398163397448309;
  } else if (x == -0.7071067811865475244) {
    res = 3 * 0.785398163397448309;
  } else {
    if (x > 0 && x < 1.) {
      res = s21_atan(s21_sqrt(1 - x * x) / x);
    } else if (x > -1 && x < 0.) {
      res = S21_PI + s21_atan(s21_sqrt(1 - x * x) / x);
    } else {
      res = S21_NAN;
    }
  }

  return res;
}
