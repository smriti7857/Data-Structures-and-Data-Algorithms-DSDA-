#include<iostream>
#include <stdio.h> 
#include <stdlib.h> 
using namespace std;

int binarySearch(int ptr[],int left,int right,int x)
{
	while(left<=right)
	{
		int mid=left+(right-left)/2;
		if(ptr[mid]==x)
		{
			return mid;
		}
		else if(x<ptr[mid])
		{
			right=mid-1;
		}
		else 
		{
			left=mid+1;
		}
	}
	return -1;
}
int main()
{
	int num;
	int size;
	int* ptr; 
	cout<<"Enter the size of array ";
	cin>>size;
	
	ptr = (int*)malloc(size * sizeof(int)); //dynamic memory allocation using malloc()
	cout<<"Enter elements of array"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>ptr[i];
	}
	int temp;
	cout<<"Sorting the array"<<endl;
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(ptr[j]<ptr[i])
			{
				temp=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
			}
		}
	}
	cout<<"Sorted Array"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<ptr[i]<<" ";
	}
	cout<<"\nEnter element to search for ";
	cin>>num;
	int output=binarySearch(ptr,ptr[0],ptr[size-1],num);
	
	if(output==-1)
	{
		cout<<"Element not found"<<endl;
		
	}
	else
	{
		cout<<"Element found at position"<<output+1<<endl;
	}
	return 0;
}
