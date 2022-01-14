#include <stdio.h>

void print_name (char *s)
{
    int i;
    i=0;
while (*s+*i != " ")
{
    i++;

}
printf("%s",s+i+1);

}

int main ()
{
    char *name ="oka taro";
    print_name(name);

}