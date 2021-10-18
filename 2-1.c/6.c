
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>

/*int main()
{
    int a ,b ,c ,d ,e ,f ,g ,h, i;
    scanf("%d",&a);
    for ( i = 0; i < a; i++)
    {
        for ( h = a; h >i; h--)
        {
            /* code
            printf(" ");
        }
        printf("*\n");
    }


}*/


int main ()
{
    int a,b,c,d,e,f,g,h,i;
    scanf("%d",&a);
    for ( i = 0; i < a; i++)
    {
        for ( g = 0; g< i; g++)
        {
            /* code */
            printf(" ");
        }
        printf("*");
        for ( h = a+2; h>(i+1);h++)
        {
        
            printf(" ");
        }
        printf("*\n");
}
}