#include "taylor_sine.h"
#include "math.h"

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    long long fact = n * factorial(n - 1);
    return fact;
}


double taylor_sine(double x, int n) {
  // implement your function here
  double sum = 0.0;

for(int i = 0; i < n; ++i) {
  int fortegn = (i % 2 == 0) ? 1 : -1;
  int exponent = 2 * i + 1;
  double power = pow(x,exponent);
  long long fact = factorial(exponent);

  sum += fortegn * (power/fact);
}
  return sum;
}

