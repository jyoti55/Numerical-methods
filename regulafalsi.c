#include <stdio.h>
#include <math.h>

#define MAX_ITERATIONS 100
#define EPSILON 0.001

double f(double x) {
  // Return the function you want to find the root of
  return x*x - 4;
}

int main() {
  double a, b, c, fa, fb, fc;

  // Initialize a and b such that f(a) and f(b) have opposite signs
  a = 1;
  b = 2;
  fa = f(a);
  fb = f(b);

  for (int i = 0; i < MAX_ITERATIONS; i++) {
    c = (a*fb - b*fa) / (fb - fa);
    fc = f(c);

    if (fabs(fc) < EPSILON) {
      // Root found
      printf("Root = %f\n", c);
      break;
    }

    if (fa*fc < 0) {
      b = c;
      fb = fc;
    } else {
      a = c;
      fa = fc;
    }
  }

  return 0;
}
