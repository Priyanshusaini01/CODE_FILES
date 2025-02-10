#include<iostream>
using namespace std;

int getmin(int num[],int n)
{
    int mini=INT16_MAX;
    for(int i = 0; i <n; i++)
    {
        mini=min(mini,num[i]);
        
    }
    return mini;
    
}
int getmax(int num[],int n)
{
    int maxi=INT16_MIN;
    for(int i = 0; i <n; i++)
    {
        maxi=max(maxi,num[i]);
        
    }
    return maxi;
}
int main(){
int size;
cin>>size;
int num[100];

for (int  i = 0; i <size; i++)
{
    cin>>num[i];
}
cout<<"minimum  value "<<getmin(num,size)<<endl;
cout<<"maximum  value "<<getmax(num,size)<<endl;
return 0;
}