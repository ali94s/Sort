#include<iostream>
using namespace std;
void Quick_Sort(int arr[],int start,int end)
{
	if(start>=end)
	{
		return;
	}
	int key=arr[start];
	int first=start;
	int last=end;
	while(start<end)
	{
		while(start<end&&arr[end]>=key)
			end--;
		if(start<end)
			swap(arr[end],arr[start]);
		while(start<end&&arr[start]<=key)
			start++;
		if(start<end)
			swap(arr[start],arr[end]);
	}
	Quick_Sort(arr,first,end-1);
	Quick_Sort(arr,end+1,last);
}


int main()
{
	int arr[]={5,4,8,3,2,4,1,9,7};
	Quick_Sort(arr,0,sizeof(arr)/sizeof(arr[0]));
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
