#include<stdio.h>
void swap(int*,int*);
main()
{
	int a=40,b=50;
	printf("before swap a=%d and b=%d\n",a,b);
	swap(&a,&b);
	printf("afther swap a=%d and b=%d\n",a,b);
}
void swap(int *x,int *y)
{
	int t;
  t=*x;
  *x=*y;
 *y=t;
}
