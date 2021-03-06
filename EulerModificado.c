#include "stdio.h"
#include "math.h"

double fo(double w);
double fw(double o);

int main(int argc, char const *argv[]) {
  double tf = 10, t0, dt;
  double g = 9.8, l = 1, ko, kw;
  double o0 = M_PI/4, w0 = 0, o1, w1;

  int n = 100000;

  dt = (tf - t0)/n;
  printf("t\ttheta\tomega\n");
  printf("%f\t%f\t%f\n", t0, o0, w0);

  while (t0 <= tf) {
    ko = fo(w0);
    kw = fw(o0);

    o1 = o0 + dt*fo(w0 + 0.5*dt*ko);
    w1 = w0 - dt*fw(o0 + 0.5*dt*kw);

    o0 = o1;
    w0 = w1;
    t0 += dt;

    printf("%f\t%f\t%f\n", t0, o0, w0);
  }
  return 0;
}

double fo(double w) {
  return w;
}

double fw(double o) {
  return -9.8*sin(o);
}
