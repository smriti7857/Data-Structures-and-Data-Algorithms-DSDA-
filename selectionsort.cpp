#include<iostream>
#include <stdio.h> 
#include <stdlib.h>
using namespace std;

void selectionSort(int ptr[],int size)
{
	for(int i=0;i<size-1;i++)
	{
		int min=i;
		for(int j=i+1;j<size;j++)
		{
			if(ptr[j]<ptr[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			int temp=ptr[i];
			ptr[i]=ptr[min];
			ptr[min]=temp;
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
	selectionSort(ptr,size);
	cout<<"SORTED ARRAY"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<ptr[i]<<" ";
	}
	return 0;
}
