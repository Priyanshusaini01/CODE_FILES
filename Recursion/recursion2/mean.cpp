#include<iostream>
using namespace std;
//  int i=0; 
int solve(int arr[],int n,int i,int sum){
    // int i=n;
    if(i==n) {
        return sum;}
        sum+=arr[i];
    return solve(arr,n,i+1,sum); // you can also icrement the idx 
} 
int main(){
      float Mean = 0; 
    int A[] = {1,2,1,1,2,1}; 
    int N = sizeof(A)/sizeof(A[0]);     
   int sum=solve(A, N,0,0); 
   int mean= sum/N;
   cout<<sum;


    return 0; 
 
return 0;
}