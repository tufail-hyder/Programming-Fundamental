#include<stdio.h>
int primefactors(int num);
int main ()
{
	int num;
	printf("enetr the num");
	scanf("%d",&num);
	primefactors(num);
	return 0;
}
int primefactors(int num)
{
	for(int i=2;i<=num;i++)
	{
		if(num%i==0)
		{
		printf("%d",i);	
		}
	}
}