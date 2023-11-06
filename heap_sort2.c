//heap sort for min heap
#include<stdio.h>

int swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;

	return 
}

int indexs(int i)
{
	 return i/2;
}

int heapify(int arr[],int n)
{
	int val;
	printf("Enter the value you want to enter");
	scanf("%d",&val);

	arr[n+1]=val;
	realsize=n+1;

	int index=indexs(realsize);

	if(val<arr[index])
	{
		int l=2*i;
		swap(arr[realsize],arr[index])
	}
}

void main()
{
	int a[10],n;
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("Enter the elements of array");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	heapify(a,n);
}