//selection sort
//status-

#include<stdio.h>
void main()
{
	int a[10],n,temp;
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		printf("Array elements are");
		scanf("%d",&a[i]);
	}
	//selection sort logic
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	//printing sorted array
	
	for(int i=0;i<n;i++)
			printf("%d",a[i]);
	
	
}