#include<iostream>
using namespace std;

void AdjustDown(int arr[],int len,int parent);
void HeapSort(int arr[],int len);
//1.建堆
//2.排序
//时间复杂度是O(N(log2)N)
void HeapSort(int arr[],int len)
{
	//建堆
	for(int i=(len-2)/2;i>=0;i--)
	{
		AdjustDown(arr,len,i);
	}
	//调整
	for(int j=1;j<len;j++)
	{
		swap(arr[0],arr[len-j]);
		AdjustDown(arr,len-j,0);
	}
}

//升序的排列   如果要降序排列  则只需要建立一个小堆就可以
void AdjustDown(int arr[],int len,int parent)
{
	while(parent<len)
	{
		size_t child=parent*2+1;   //去最后一个非叶子节点
		if(child+1<len && arr[child]<=arr[child+1])
			child+=1;
		if(child<len && arr[child]>=arr[parent])
			swap(arr[parent],arr[child]);
		parent=child;
	}
}

int main()
{
	int arr[]={1,5,7,9,3,2,4,7.6};
	HeapSort(arr,sizeof(arr)/sizeof(arr[0]));
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
