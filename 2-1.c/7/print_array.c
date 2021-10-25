#include <stdio.h>

void print_array(const int a[], int n)
{
  int i;
  for (i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int main(void)
{
  int root3[] = {1, 7, 3, 2, 0, 5, 0, 8};

  print_array(root3, /* ここを埋める */);

  return 0;
}
