#include <iostream>
#include <vector>
#include <cmath>
#include "timer.hpp"

using namespace std;

int main() {
  const int N = 1'000'000'000;
  double dx = 1.0f/(N-1);

  double sum = 0.;

  Timer timer;

  for(int i=0; i<N; ++i) {
    double x = i*dx;
    sum += 4.0f/(1.0f + x*x)*dx;
  }

  double elapsed = timer.elapsed();

  std::cout << "Time: " << elapsed << '\n';
  std::cout << "Result: " << sum << '\n';

  return 0;
}
