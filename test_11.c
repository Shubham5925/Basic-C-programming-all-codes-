//Sorting -1-Bubble sort

#include<stdio.h>
void main()
{
	int a[10],n,temp;
	printf("Enter the size of array:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("After sorting");
	for(int i=0;i<n;i++)
		printf("%d",a[i]);
}