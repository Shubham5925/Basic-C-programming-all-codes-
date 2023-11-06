//sorting-selection sort

#include<stdio.h>
void main()
{
	int a[10],n,temp;
	printf("enter size");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	//sorting logic
	
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
	for(int i=0;i<n;i++)
		printf("%d",a[i]);
}
			