 #include<iostream>
#include<vector>
using namespace std;
 void subsequence(int i,vector<int>&v,int n,int s,int sum,int arr[]){

    // base case
    if(i==n){  
    if(s==sum)  
       {  for(auto it:v)cout<<it<<" ";
       cout<<endl;
       
    }
        return ;
    } 
    // take condition
    v.push_back(arr[i]);
    s+=arr[i];
    subsequence(i+1,v,n,s,sum,arr);
    s-=arr[i];
    v.pop_back();

    //not take 
    subsequence(i+1,v,n,s,sum,arr);

   }
    

int main(){
    int nums[] = {1, 2, 3};
     int n=3;
     int sum=3;
   
    vector<int> v;
    subsequence(0,v,n, 0,sum,nums);

return 0;
}