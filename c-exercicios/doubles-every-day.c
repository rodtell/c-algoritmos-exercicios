#include <stdio.h>

int Main() {
  double value = 0.01;
  for (int i = 1; i <= 30; i++) {
    value = value * 2;
  }
  printf("value after 30 days: %.2f\n", (double)value);
  return 0;
}
