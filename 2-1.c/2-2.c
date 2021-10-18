
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>

int main()
{
    int i,a,b,c;
    b=0;
    scanf("%d",&a);
    for ( i = 0; i <=a; i++)
    {
       /* code */
    b=i+b;
    }

    printf("%d",b);
    return 0 ;


}