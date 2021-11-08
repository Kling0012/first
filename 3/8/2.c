#include<stdio.h>

#define diff(x,y) ((x)-(y))

int main()
{
    int i=2 ,j=3;
    double a=2.3 , b=1.1;

    printf("%d\n",diff(i,j));
    printf("%f\n",diff(a,b));

}