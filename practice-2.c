//searching : linear search & binary search

//linear search
#include<stdio.h>
void main()
{
	int a[10],num;
	for(int i=0;i<10;i++)
		scanf("%d",&a[i]);
	scanf("%d",&num);
	for(int i=0;i<10;i++)
		if(a[i]==num)
			found=1;
			printf("Value fond");
			break;
}


//Binary search 
#include<stdio.h>
void main()
{
	int a[10],n,l=0,h=9,found=0,mid;
	for(int i=0;i<10;i++)
		sacnf("%d",&a[i]);
	scanf("%d",&ch)
	l=0;
	h=9;
	found=0;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(a[mid]==num)
			found=1;
			printf("value found");
			break;
		else if(a[mid]<num)
			l=mid+1;
		else
			h=mid-1
	}
	if(l>=h && found==0)
		printf("Value not found");
	
//BUbble sort
#include<stdio.h>
void main()
{
	int a[10],n;
	printf("array size");
	scanf("%d",&n);
	for(in ti=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[j+1]>a[j])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

//Insertion sort

#include<stdio.h>
void main()
{
	for (int i=0;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j]
			j--;
		}
		a[j+1]=temp;
	}
}


