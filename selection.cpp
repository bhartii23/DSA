#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n)
{
    //selection sort
    for(int i=0;i<n-1;i++)
    {
        int min = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        int temp = arr[min];
        arr[min]= arr[i];
        arr[i]= temp;
    }
    cout<<"after the selection sort:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
int arr[]={23,10,11,32,11,12};
int n= sizeof(arr)/sizeof(arr[0]);
cout<<"before the selection sort : "<<endl;
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
selection_sort(arr,n);
return 0;
}