#include "stdio.h"
#include "math.h"


int main(int argc, char const *argv[]) {
  double tf = 100, t0, dt;
  double g = 9.8, l = 1;
  double o0 = 45, w0 = 0, o1, w1;

  int n = 100000;

  dt = (tf - t0)/n;
  printf("t\ttheta\tomega\n", );
  printf("%f\t%f\t%f\n", t0, o0, w0);

  while (t0 <= tf) {
    o1 = o0 + dt*w0;
    w1 = w0 - dt*(g/l)*sin(o0);

    o0 = o1;
    w0 = w1;
    t0 += dt;
  }
  return 0;
}
