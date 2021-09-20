#include <stdio.h>

int main() {

  printf("Good News Everyone! %d %f %0.3lf %c", 10, 0.123123, 123.2, 's' );

  int a = 12;

  for (int k = 0; k < 6; k++)
    printf("%d", a * k);

  return 0;
}
