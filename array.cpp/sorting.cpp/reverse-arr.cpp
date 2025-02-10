#include<iostream>
using namespace std;

void reverse(int arr[],int  n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        swap(arr[s],arr[e]);
    }
}
int main(){

return 0;
}