//1-completed -stack and queue-using both array & linked list
//2-completed -linked list all 3, 1-singly 2-doubly 3-circular 
//3-searching -1-linear serach 2-Binary search

//linear search
#include<stdio.h>
void main()
{
	int a[10],n,key,flag=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		printf("Array element at index %d: ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	printf("Enter the value you want to search");
	scanf("%d",&key);
	
	for(int i=0;i<n;i++)
	{
		if(a[i]==key)
			flag=1;
	}

	if(flag==1)
		printf("Value is found:");
	else
		printf("Value is not found:");
} 
