#include<stdio.h>
int fib(int num);
int main()
{
	int num;
	printf("enter the num");
	scanf("%d",&num);
	fib(num);
	return 0;
}
int fib(int num)
{
	int next,a=0,b=1;
	for(int i=1;i<=num;i++)
	{
		printf("%d\n",a);
		next=a+b;
	}
}
