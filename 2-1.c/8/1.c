#include <stdio.h>
#define sqr(x) ((x) * (x))

int main(void) {
    int i = 2;
    printf("\n%d\n", sqr(i++));
}