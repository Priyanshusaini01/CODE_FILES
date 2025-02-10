#include<iostream>
#include<vector>
using namespace std;

   void subsequence(int i,vector<int>&v,int arr[],int n){

    // basee case
    if(i==n){
        for(auto it:v){
            cout<<it<<" ";
        }
    if(v.size()==0) cout<<"{}"<<endl;
        cout<<endl;
        return ;
    }
    v.push_back(arr[i]);
    // take condition
    subsequence(i+1,v,arr,n);
    v.pop_back();
    subsequence(i+1,v,arr,n);
   }
    

int main(){
    int nums[] = {3, 1, 2};
     int n=3;
    vector<int> v;
    subsequence(0,v,nums, n);

return 0;
}