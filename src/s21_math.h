#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#include <float.h>

#define S21_PI 3.14159265358979323846264338327950288
#define S21_EXP 2.7182818284590452353602874713526624
#define S21_EPS 1e-9
#define s21_MAX_double 17976931348623157
#define S21_POSITIVE_INF 1.0 / 0.0
#define S21_NEGATIVE_INF -1.0 / 0.0
#define S21_NAN -1.0 / 0.0 + 1.0 / 0.0
#define is_fin(x) __builtin_isfinite(x)
#define is_nan(x) __builtin_isnan(x)
#define is_inf(x) __builtin_isinf(x)

int s21_abs(int x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_exp(double x);
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_log(double x);
long double s21_pow(double base, double exp);
long double s21_sin(double x);
long double s21_sqrt(double x);
long double s21_tan(double x);
long double s21_factorial(int n);
#endif  // SRC_S21_MATH_H_
