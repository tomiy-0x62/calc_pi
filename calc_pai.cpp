#include <iostream>
#include <math.h>

double f(double x) {
   return sqrt(1 - pow(x, 2.0));
}

double a(double n) {
   double a_sum = 0;
   for (double k = 1.0; k < n + 1.0; k++) {
      a_sum += f(k / n);
   }
   return a_sum / n;
}

double b(double n) {
   double b_sum = 0;
   for (double k = 0.0; k < n; k++) {
      b_sum += f(k / n);
   }
   return b_sum / n;
}

int main() {
   double n = 100000000;
   double an = a(n);
   double bn = b(n);
   std::cout << "n = " << n << ", " << an * 4.0 << " < π < " << bn * 4.0 << std::endl;
   return 0;
}
