#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
  int    n, nb;
  double dx, dy;

  printf("sizeof(int)     = %u\n", (unsigned)sizeof(int));
  printf("sizeof(double)  = %u\n", (unsigned)sizeof(double));

  printf("sizeof(na)      = %u\n", (unsigned)sizeof(n));
  printf("sizeof(dx)      = %u\n", (unsigned)sizeof(dx));

  printf("sizeof(na + nb) = %u\n", (unsigned)sizeof(n + nb));
  printf("sizeof(na + dy) = %u\n", (unsigned)sizeof(n + dy));
  printf("sizeof(dx + dy) = %u\n", (unsigned)sizeof(dx + dy));

  return 0;
}
