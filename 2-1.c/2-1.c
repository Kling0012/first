

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>

int main()
{
    double a,b,c,d,e,f,g;
    printf("係数を入力してください");
    scanf("%g",&a);
    scanf("%g",&b);
    scanf("%g",&c);

    d=b*b-4*a*c;

    if (d<0)
    {
        /* code */
        printf("実数解はありません");
    }
    else
    {
        f=(-b+sqrt(d))/2*a;
        g=(-b-sqrt(d))/2*a;
    if (d==0)
    {
        /* code */
        printf("解＝%g",g);
    }
    else
    {
        printf("解＝%g",f);
        printf("解＝%g",g);
    }
    }
    return 0;
}