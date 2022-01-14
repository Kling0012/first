#include<stdio.h>
#include<math.h>

double heron(int *a ,int *b , int *c)
{
    int s , r ;
    scanf_s("%d",a);
    scanf_s("%d",b);
    scanf_s("%d",c);
    s=(*a+*b+*c)/2;
    r=sqrt(s*(s-(*a))*(s-(*b))*(s-(*c)));

    return r ;


}

int main()
{
    int x ,y ,z ,r;
    r=heron(&x,&y,&z);
    printf("%d%d%d",x,y,z);
    puts("\n");
    printf("%d",r);
}