#include<iostream>
using namespace std;


int main(){
int n;
cout<<"enter size of the array"<<endl;
cin>>n;
cout<<" enter element for  input:"<<endl;
int arr[n];

for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int i=-1;
int pivot=0;
for(int j=0;j<n;j++)
{
    if(arr[j]<pivot)
    {    i++;
        swap(arr[i],arr[j]);
    }
}
for( int i=0;i<n;i++) cout<<arr[i]<<" ";
return 0;
}