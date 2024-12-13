#include<bits/stdc++.h>
using namespace std;

void frequency(int arr[],int n)
{
    unordered_map<int,int> map;

    for(int i=0;i<n;i++)
    {
        map[arr[i]]++;
    }
    int maxf=0,minf=n;
    int maxele = 0,minele = 0;

    for(auto it:map){
        int count= it.second;
        int element = it.first;
    
        if(count >maxf)
        {
            maxele = element;
            maxf = count;
        }
        if(count < minf)
        {
            minele=element;
            minf=count;
        }
    }
    cout<<"highest frequency element is : " << maxele <<"\n";
    cout<<"the lowest frequency element is : "<<minele<<endl;
      
}
int main()
{
int arr[]={10,5,10,10,15,5};
int n = sizeof(arr)/sizeof(arr[0]);
frequency(arr,n);
return 0;
}