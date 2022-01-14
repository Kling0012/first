#include <stdio.h>

int main(void) {
  char *p = "123456";
  char *q = "abc";

  char r[] = "123456";
  char s[] = "abc";

  char t[][20] = {"ABC", "XYZ", "IJK"};
  char u[][20] = {"ABCD", "WXYZ", "IJKL"};
  char v[][10] = {"ABC", "XYZ", "IJK"};

  char *x[] = {"ABC", "XYZ", "IJK"};
  char *y[] = {"ABCD", "WXYZ", "IJKL"};

  printf("Q1: %d\n", (unsigned)(sizeof(p) - sizeof(q)));
  printf("Q2: %d\n", (unsigned)(sizeof(r) - sizeof(s)));
  printf("Q3: %d\n", (unsigned)(sizeof(t) - sizeof(u)));
  printf("Q4: %d\n", (unsigned)(sizeof(t) - sizeof(v)));
  printf("Q5: %d\n", (unsigned)(sizeof(x) - sizeof(y)));
}