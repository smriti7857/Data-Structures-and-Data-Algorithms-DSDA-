#include<iostream>

using namespace std;

int main()
{
	int arr[20],i,n,find;
	int count=0;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements of array";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
	cout<<"Enter the element to find";
	cin>>find;
	for(int i=0;i<n;i++)
	{
		if(find==arr[i])
		{
			cout<<"Element found";
			count=1;
			break;
		}
	}
	if(count==0)
	{
		cout<<"Element not found";
	}
	return 0;
}
