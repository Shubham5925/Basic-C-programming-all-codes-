#include<stdio.h>
int main()
{
	int a[10],b[10],n,m;
	printf("Enter the max_power of polynomial A:");
	scanf("%d",&n);
	for(int i=n;i>=0;i--)
	{
		printf("Enter the coefficient of x^%d :",i);
		scanf("%d",&a[i]);
	}
	
	printf("Enter the max_power of polynomial B:");
	scanf("%d",&m);
	for(int i=m;i>=0;i--)
	{
		printf("Enter the coefficient of x^%d :",i);
		scanf("%d",&b[i]);
	}
	
	
	if(n>m)
	{
		printf("Sum of polynomial is:");
		for(int i=n;i>=0;i--)
			printf("%dx^%d+",a[i]+b[i],i);
	}
	
	else if(m>n)
	{
		printf("Sum of polynomial is:");
		for(int i=m;i>=0;i--)
			printf("%dx^%d+",a[i]+b[i],i);
	}
	return 0;
}
		
		
		
	
	
	