#include<stdio.h>

void reco(int const a[],int b[])
{
    int i,j,k=0,l=5;;
    for ( i = 0; i <5 ; i++,l--)
    {
        
        b[l]=a[i];
       
        
    }

}

int main()
{
    int i,j,k,l,f;
    int a[5]={1,2,3,4,5};
    int b[5];

    reco(b,a);

    for ( i = 0; i < 5; i++)
    {
        /* code */
        printf("b[%d]=%d\n",i,b[i]);
    }
    
}