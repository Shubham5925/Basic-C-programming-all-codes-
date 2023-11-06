//searching-binary search -elements must be in sorted order

#include<stdio.h>
int main()
{
	int a[10],mid,l=0,h=9,key,found=0;
	printf("Insert value in sorted order");
	for(int i=0;i<9;i++)
		scanf("%d",&a[i]);

	printf("Enter the key value to be searched");
	scanf("%d",&key);
	l=0;
	h=9;
	
	while(l<=h)
	{
		mid=(l+h)/2;
		if(a[mid]==key)
		{
			found=1;
			printf("Value found");
			break;
		}
		else if(a[mid]>key)
			h=mid-1;
		else if(a[mid]<key)
			l=mid+1;
		
	}
	if(l>h && found==0)
		printf("Value not found");
	
	return 0;

		
}
