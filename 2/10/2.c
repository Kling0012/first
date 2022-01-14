#include <stdio.h>
void adjust_point(int *n) {
    /* nの指す値が0より小さければ0，100より大きければ100 に*/
    if (*n>100)
    {
        /* code */
        *n=100;
    }
    else if (*n<0)
    {
        /* code */
        *n=0;
    }
    }
int main(void) 
{
    int i;i= -1;
    adjust_point(&i);
    printf("%d\n", i);
    i= 101;adjust_point(&i);
    printf("%d\n", i);
    i= 99;adjust_point(&i);
    printf("%d\n", i);
}