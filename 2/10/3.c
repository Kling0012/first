#include<stdio.h>

void sw (int *px ,int *py)
{
    int temp  = *px;
    *px = *py;
    *py= temp;

}

void sr (int *n1 ,int *n2)
{
    if (*n1>*n2)
    {
        /* code */
        sw(n1,n2);
    }
    

}
void sr1(int *n1 ,int *n2, int *n3)
{
    sr(n2,n3);
    sr(n1,n2);
    sr(n2,n3);
}

int main(void) 
{int na= 7, nb= 5, nc= 2;
    printf("ソート前: ");
    printf("%d %d %d¥n", na, nb, nc);
    sr1(&na, &nb, &nc);
    printf("ソート後: ");
    printf("%d %d %d¥n", na, nb, nc);
}