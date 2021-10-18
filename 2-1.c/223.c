
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>

int feb(n)
{
    int a ,b ,c ;
    b=n-1;
    c=n-2;
if (n<2||c<2&&b<2)
{
    /* code */
    a=1;
}
else
{
    a=(b)+(c);
}

    return a;

}

int main   ()
{
    int i,a=0 , b=0 , c=0 ,d=0 ,e=0,f=0;
b=0;
e=0;
c=0;

    scanf("%d",&c);


    for ( i=0;  i < c  ; i++)
    {
        /* code */
        a=feb(c);
        c=c-1;
        d=a+d;
        

    }


printf("%d",d);
return 0;
}
