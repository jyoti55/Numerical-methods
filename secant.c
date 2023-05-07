#include <stdio.h>
#include <math.h>

// Function f(x)
double f(double x) {
  return x*x - 4;
}

// Secant method
double secant(double x0, double x1, double tol, int maxIter) {
  double x2;
  int iter = 0;

  while (iter < maxIter) {
    x2 = x1 - f(x1) * (x1 - x0) / (f(x1) - f(x0));
    if (fabs(x2 - x1) < tol) return x2;  // Root found
    x0 = x1;
    x1 = x2;
    iter++;
  }

  // Root not found
  return NAN;
}

int main() {
  printf("Enter the value of x0,x1,tolerance and max_ietration\n");
  
  double root = secant(0, 2, 1e-6, 100);
  if (isnan(root)) {
    printf("Root not found\n");
  } else {
    printf("Root = %f\n", root);
  }
  return 0;
}
