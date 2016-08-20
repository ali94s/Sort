#include<stdio.h>
   
//插入排序的时间复杂度是 O(N^2)
//arr的前n-1个数是排好序的  插入第n个数
void insert(int arr[], int n)
{
	int i=n-1;
	int tmp=arr[n];
	while(i>=0 && tmp>arr[i])
	{
		arr[i+1]=arr[i];
		i--;
	}
	arr[i+1]=tmp;

}
//递归实现
void insert_sort(int arr[],int n)
{
	if(n>0)	
	{	
		insert_sort(arr,n-1);
		insert(arr,n);
	}
	else
		return;
}


//直接插入排序
void InsertSort(int arr[],size_t len)
{
	int i=0;
	int j=0;
	int tmp=0;
	//从第二个数开始
	for(i=1;i<len;i++)
	{
		tmp=arr[i];
		j=i-1;
		while(j>=0 && tmp < arr[j])
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=tmp;
	}
}


//折半插入排序（二分插入排序）
void BinaryInsertSort(int arr[],int len)
{
	int i=0;
	int j=0;
	int start=0;
	int end=0;
	int tmp=0;
	int mid=0;
	for(i=1;i<len;i++)
	{
		tmp=arr[i];
		mid=0;
		end=i-1;
		start=0;
		while(start<=end)
		{
			mid=(end+start)/2;
			if(tmp<arr[mid])
				end=mid-1;
			else
				start=mid+1;
		}
		j=i-1;
		while(j>=start)
		{
			arr[j+1]=arr[j];
			j--;
		}
		if(start!=i)
			arr[start]=tmp;
	}
}
int main()
{
	int i=0;
	int a[]={3,4,2,3,1,4,9,7,8};
	BinaryInsertSort(a,sizeof(a)/sizeof(a[0]));
	//InsertSort(a,sizeof(a)/sizeof(a[0]));
	//insert_sort(a,sizeof(a)/sizeof(a[0])-1);
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
