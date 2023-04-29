#include<stdio.h>
int main()
{
	int num;
	printf("enter the integer");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("even numer");
	}
	else
	{
		printf("odd number");
	}
	return 0;
}