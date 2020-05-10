#include<iostream>
#include <stdio.h> 
#include <stdlib.h>

using namespace std;

void bubbleSort(int ptr[],int size)
{

	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size-i-1;j++)
		{
			if(ptr[j]>ptr[j+1])
			{
				int temp=ptr[j];
				ptr[j]=ptr[j+1];
				ptr[j+1]=temp;
			}
		}
	}
}

int main()
{
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
	cout<<"UNSORTED ARRAY"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<ptr[i]<<" ";
	}
	cout<<endl;
	bubbleSort(ptr,size);
	cout<<"SORTED ARRAY"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<ptr[i]<<" ";
	}
	return 0;
}
