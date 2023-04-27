#include "s21_math.h"

long double s21_quick_pow(double base, long long int exp) {
  double res = 1;
  while (exp) {
    res *= base;
    exp--;
  }
  return res;
}

long double s21_pow(double base, double exp) {
  long double res = 1;
  if (base == 1 || exp == 0) {
    res = 1;
  } else if (is_nan(base) || is_nan(exp)) {
    res = S21_NAN;
  } else if (is_inf(base) && base < 0 && exp != (long long int)exp) {
    res = exp > 0 ? S21_POSITIVE_INF : 0;
  } else if (base == -1) {
    res = base * -1;
    if (s21_fabs(exp) == 1) res = base;
  } else if (base < 0) {
    base *= -1;
    if (is_inf(exp) && exp < 0) {
      res = 0;
    } else if (is_inf(exp)) {
      res = S21_POSITIVE_INF;
    } else if (exp != (long long int)exp) {
      res = S21_NAN;
    } else if (s21_fmod(exp, 2)) {
      res = s21_exp(exp * s21_log(base)) * -1;
    } else {
      res = s21_exp(exp * s21_log(base));
    }
  } else if ((exp) - (long long int)exp < 1e-6 && exp > 0) {
    res = s21_quick_pow(base, (long long int)exp);
  } else {
    res = s21_exp(exp * s21_log(base));
  }
  return res;
}
