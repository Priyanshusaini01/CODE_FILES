#include<iostream>
using namespace std;
 int subsequence(int i,int n,int s,int sum,int arr[]){
 // count all the subsequence 
    // base case
    if(i==n){  
    if(s==sum)  
     {  return 1;
       
    }
       else  return 0;
    } 
    // take condition
    // v.push_back(arr[i]);
    s+=arr[i];
   int l= subsequence(i+1,n,s,sum,arr);
    s-=arr[i];
    // v.pop_back();

    //not take 
    int r =subsequence(i+1,n,s,sum,arr);
 return l+r;
   }

int main(){

 int nums[] = {1, 2, 1};
     int n=3;
     int sum=2;
   
    // vector<int> v;
    cout<<subsequence(0,n, 0,sum,nums);
return 0;
}