#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("Sum of natural no=%d",sum);
	return 0;
}