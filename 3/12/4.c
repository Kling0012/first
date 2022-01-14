#include<stdio.h>


void ta (char s[][5],int n)
{
    int i,j ;
    for ( i = 0; i < 4; i++)
    {
        /* code */
        for (  j = 0; j<3; j++)
        {
            /* code */
        printf("%c",s[j][i]);
        }
        printf("\n");
        

    }
    
    
}


int main (void)
{
    char cs[][5]={"lisp","c","ada"};

    ta(cs,3);
}