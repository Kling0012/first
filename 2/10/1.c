#include <stdio.h>
int main ()
{
    int *i,j ;
    j=5;
    i=&j ;
    *i=10 ;

    printf("i=%d\n",j);
    

}