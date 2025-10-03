#include<stdio.h>
int sum(int num);
int main ()
{
	int num,result;
	printf("enetr the num");
	scanf("%d",&num);
	result=sum(num);
	printf("sum of natural num %d",result);
	return 0;
}
int sum(int num)
{
	if (num!=0)
	{
		return num+sum(num-1);
	}
	else
	{
		return num;
	}
}
	

	
