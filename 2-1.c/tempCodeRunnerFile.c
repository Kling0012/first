#include<stdio.h>

int wa(int data[6])
{
    int a ,i;
    a=0;
    for ( i = 0; i <6 ; i++)
    {
        /* code */
        a=a+data[i];
    }

    return a ;
    
}

int main()
{
    int i, data[6]={1,2,3,4,5,6};
    printf("和は%d",wa(data));
    return 0 ;
}