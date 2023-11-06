//Array duplication removal

#include<stdio.h>
void main()
{
	int a[10],n;
	printf("Enter size of array:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Array elements are:");
	for(int i=0;i<n;i++)
		printf("%d",a[i]);
	printf("\n");
	printf("after dublication removal:");
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(int k=j;k<n-1;k++)
				{
					a[k]=a[k+1];
				}
				n--;
				j--;
			}
		}
	}
	for(int i=0;i<n;i++)
		printf("%d",a[i]);
}		