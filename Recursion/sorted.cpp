#include<iostream>
using namespace std;

bool issorted(int *arr,int size)
{

    if(size==0|| size ==1)
    {
        return true;
    }
    if(arr[0]>arr[1])
    return false;
    else
    {
        bool ans= issorted(arr+1, size-1);
    return ans;
    }
}

int main(){
int arr[5]={2,3,4,5,23};
int size=5;
bool ans=issorted(arr,size);
if(ans)
{
    cout<<" sorted";
}
else{
    cout<<"not";
}
return 0;
}