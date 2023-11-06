//sorting -2-insertion sort

#include<stdio.h>
void main()
{
	int a[10],n,temp,j;
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(int i=1;i<n;i++) 
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	
	printf("array after sorting :");
	for(int i=0;i<n;i++)
		printf("%d",a[i]);

	
}
	