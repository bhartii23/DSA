#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"enter the number of elements : ";
	cin>>n;
	
	int arr[n];
	cout<<"enter the elemnets in array:";
	for(int i=0;i<n;i++)
	{
		
		cin>>arr[i];
	}
	//pre compute
	map<int,int> mpp;
	for(int i=0;i<n;i++)
	{
		mpp[arr[i]]++;
	}
	//iterate in the map
	//how it is stored in map
	for(auto it:mpp)
	{
		cout<<it.first<< "->"<<it.second <<endl;
	}
	int q;
	cout<<"enter the queries or how many times it should run:";
	cin>> q;
	while(q--)
	{
		int number;
		cout<<"enter the number to be searched";
		cin>>number;
		//fetch
		cout<<mpp[number]<<endl;
	}
	return 0;
}
