#include<iostream>
using namespace std;

//时间复杂度是O(N^2)
//选择排序每趟下来选出一个最大的或者最小的放在首位
void SelectSort(int arr[],int len)
{
	for(int i=0;i<len;i++)
	{
		for(int j=i+1;j<len;j++)
		{
			if(arr[j]<arr[i])
				swap(arr[i],arr[j]);
		}
	}
}


int main()
{
	int arr[]={1,5,7,9,2,4,3,6,8};
	SelectSort(arr,sizeof(arr)/sizeof(arr[0]));
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
