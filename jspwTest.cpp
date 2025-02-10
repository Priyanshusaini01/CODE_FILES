#include<iostream>
using namespace std;
//  int i=0; 
int solve(int arr[],int n,int i,int sum){
    int i=n;
    if(i==n) {
        return sum;}
        sum+=arr[i];
    solve(arr,n,i+1,sum);
} 
int main(){
      float Mean = 0; 
    int A[] = {1, 2, 3, 4, 5}; 
    int N = sizeof(A)/sizeof(A[0]);     
   int sum=solve(A, N,0,0); 
   int mean= sum/N;
   cout<<mean;


    return 0; 
 
return 0;
}