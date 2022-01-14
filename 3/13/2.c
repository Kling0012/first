#define	_CRT_SECURE_NO_WARNINGS
#include	<stdio.h>
#include	<math.h>
struct	solution	{
int	n;
double	x[2];
};
struct	solution	solve_equation(int	a,	int	b,	int	c)	{
/*	a,	b,	cを係数とする2次方程式の解を返す */
struct solution s ={0,{0,0}};
int k ;
k=(b*b)-4*a*c;
if (k == 0)
{
    /* code */
    s.n= 1 ;
}else if(k>0)
{
    s.n=2;
    
}


x=(b+sqrt((b*b)-4*a*c))/2*a;

}
int	main(void)
{
int	a,	b,	c,	n,	i;
struct	solution	s;
printf("2次方程式の係数(整数値)>");
scanf("%d	%d	%d",	&a,	&b,	&c);
s	=	solve_equation(a,	b,	c);
printf("方程式の実数解は%d個です¥n",	s.n);
for	(i =	0;	i <	s.n;	i++)	{
printf("解%d:	%f¥n",	i +	1,	s.x[i]);
}
return	0;
}