#include <stdio.h>
void swap(char **a ,char **b)
{ 
    char *temp ;
    *temp=(int)*a;
    *a=*b;
    *b=temp;
}
int main ()
{
    char *a= "abc",*b= "123";

    swap(&a,&b);

    printf("%s,%s",a,b);

}