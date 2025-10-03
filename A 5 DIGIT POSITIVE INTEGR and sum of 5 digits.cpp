#include<stdio.h>
int sum(int num);
int main ()
{
	int num,sumd;
	printf("enter the num");
	scanf("%d",&num);
	sumd=sum(num);
	printf("the sum of digits=%d",sumd);
}
int sum(int num)
{
	int sum=0;
	while(num>0)
	{
		sum=sum+num%10;
		num/=10;
	}
	return sum;
}