#include<iostream>
using namespace std;

int min(int num[],int n)
{
    int mini= INT16_MAX;
    for(int i=0;i<n;i++)
    {   if(num[i]<mini){
        mini= num[i]; //copy the value 
        }
    }
    return mini;

}
int maximum(int num[],int n)
{   int maxi= INT16_MIN;
    for(int i=0;i<n;i++)
    {
        if(num[i]>maxi){
        maxi= num[i];
        }

    }
        return maxi;
    
}

int main(){
int size;
cout<<" take size of the array"<<endl;
cin>>size; // size 
int num[5];
// taking inputs 
cout<<" Take inputs"<<endl;
for(int i=0;i<size;i++){
    cin>>num[i];
}
cout<<" Maximum Value is :"<<maximum(num,size)<<endl;
cout<<" Min value is :"<< min(num,size);
return 0;
}

 