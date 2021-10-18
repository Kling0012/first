#include<stdio.h>
#define num 5
int main()
{
    int a[num]={};
    int b,c,d=0,e,f,g,h,i;

    for (int i = 0; i <num ; i++) {
        scanf_s("%d",&a[i]);
        b=b+a[i];

    }
    c=b/num;

    for (int j = 0; j < num; j++) {
        if(a[j]>c)
        {
            d=d+1;
        }
    }
    printf("平均は%d,平均以上の数は%dです。",c,d);

    return 0 ;
}