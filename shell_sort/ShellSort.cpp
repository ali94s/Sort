#include<iostream>
#include<stdio.h>
using namespace std;

//对直接插入排序的改进
//开始的时候进行大步的调整  当接近有序的时候 进行了一次直接插入排序
void ShellSort(int arr[],int len)
{
	//每次取之前步长的一般    当然这个可以根据需求设定
	for(int div=len/2;div>=1;div/=2)
	{
		for(int i=div;i<len;i++)
		{
			for(int j=i;arr[j]<arr[j-div]&&j>0;j-=div)
			{
				swap(arr[j],arr[j-div]);
			}
		}
	}
}

int main()
{
	int a[]={1,7,4,9,2,3,8,7,6};
	ShellSort(a,sizeof(a)/sizeof(a[0]));
	for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
