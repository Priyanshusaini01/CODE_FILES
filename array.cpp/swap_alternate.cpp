#include<iostream>
using namespace std;

void printarray (int arr[],int n)
{
     for (int i = 0; i < n; i++)
     {
        cout<<arr[i]<<" ";
     }
}
void swapalternate(int arr[],int n)
{
    for (int i = 0; i < n; i+=2)
    {
        if(i+1<n)// n = size of array 
        {
            swap(arr[i],arr[i+1]);
        }
    }
    
}
int main(){
int arr[8]={5,2,9,4,7,6,1,0};

swapalternate(arr,8);
printarray(arr,8);

return 0;
}