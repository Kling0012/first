#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* nのk乗 */
int power(int n, int k)
{
    int a=0 ;
while (a<k)
{
    n=n*k;

    a++;

}

return n ;

}

/* k桁の8進数を10進数に変換 */
int eight_to_ten(const int a[], int k)
{

int i , j=0 ;

 for ( i = 0; i < k; i++)
 {
     j=j+power(a[i],k-i);
 }
 
 return j;
}

int main(void) {
    int d[] = {1, 2, 3}; /* 8進数の 123 */
    printf("10進数に変換した値は%dです．\n", eight_to_ten(d, 3));
}
