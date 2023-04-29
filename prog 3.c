#include<stdio.h>
int main()
{
	int i,n,x=1;
	printf("enter the number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		x=x*i;
	}
	printf("factrial=%d",x);
	return 0;
}