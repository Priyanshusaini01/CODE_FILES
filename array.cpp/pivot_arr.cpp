#include<iostream>
using namespace std;

int pivot (int arr[],int n)
{
    int  s= 0;
    int e=n-1;
    int mid=(s+e)/2;

    while (s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
    
    else 
    {
        e=mid;


    }
        mid=(s+e)/2;

    }
    return s;

    
}

int main(){
    int num[6]={3,8,10,17,2,5};
int find=pivot(num,5);
cout<<"pivot ="<<find<<endl;

return 0;
}