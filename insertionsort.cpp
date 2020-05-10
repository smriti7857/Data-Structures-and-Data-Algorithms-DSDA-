#include<iostream>
#include <stdio.h> 
#include <stdlib.h>

using namespace std;

void insertionSort(int ptr[],int size)
{
	int key=0;
	int j=0;
	for(int i=1;i<size;i++)
	{
		key=ptr[i];
		j=i-1;
		while(j>=0&&ptr[j]>key)
		{
			ptr[j+1]=ptr[j];
			j=j-1;
		}
		ptr[j+1]=key;
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
	insertionSort(ptr,size);
	cout<<"SORTED ARRAY"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<ptr[i]<<" ";
	}
	return 0;
}
