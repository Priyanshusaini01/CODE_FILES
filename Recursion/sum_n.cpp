#include<iostream>
using namespace std;

void reverse(int *arr,int s,int e){
    if(s>=e)return ;
    // int s=0;
    // int e= n-1; 
    swap(arr[s],arr[e]);
    reverse(arr,s+1,e-1);
}

int main(){
int arr[5]={1,3,2,5,4};
// cin>>n;
// int n= arr.size();
reverse(&arr[0],0,4);
for(auto it:arr){
    cout<<it<<" ";
}
return 0;
}