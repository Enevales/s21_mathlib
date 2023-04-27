# Mathlib
---
In this project we developed our own version of the standard math.h library in the C programming language. This library implements basic mathematical operations, which are then used in various algorithms

An educational group project, the purpose of which is to learn the basics of computational methods and solidify knowledge of structured programming.


#### Overview:
---

| Function | Description |
|  -------- | ----------- |
| `int abs(int x)` | computes absolute value of an integer value |
| `long double acos(double x)` | computes arc cosine |
| `long double asin(double x)` | computes arc sine |
| `long double atan(double x)` | computes arc tangent |
| `long double ceil(double x)` | returns the nearest integer not less than the given value |
| `long double cos(double x)` | computes cosine |
| `long double exp(double x)` | returns e raised to the given power |
| `long double fabs(double x)` | computes absolute value of a floating-point value |
| `long double floor(double x)` | returns the nearest integer not greater than the given value |
| `long double fmod(double x, double y)` | remainder of the floating-point division operation |
| `long double log(double x)` | computes natural logarithm |
| `long double pow(double base, double exp)` | raises a number to the given power |
| `long double sin(double x)` | computes sine |
| `long double sqrt(double x)` | computes square root |
| `long double tan(double x)` | computes tangent |

#### library Build: 
---
> $ cd src
> $ make

#### Technological description:
---
- The library was implemented in C language of C11 standard using gcc compiler. Based on the POSIX.1-2017 standard. The library developed according to the principles of structured programming
- Full coverage of library functions code with unit-tests with the Check library, based on a comparison with the behavior of math.h functions;
- Supported systems: Linux-based systems and macOS



####  Demo:
---

![](misc/demo.gif)