#include<stdio.h>

int main()
{
    int a;

    scanf_s("%d",&a);

    if (a%4!=0 && (a%4==0||(a%100==0||a%400!=0)))
    {
        /* code */
        printf("平年だ");
    }
    else
    {
        printf("uruidosi");
    }
}