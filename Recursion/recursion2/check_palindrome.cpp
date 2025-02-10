#include<iostream>
using namespace std;

 bool  reverse(int *a,int n,int s, int e){
        if(s>e) return true ;
        
        if(a[s]!=a[e])return false;
        reverse(a,n,s+1,e-1);
// return false;
 }

int main(){
int a[]= {1,2,1,1,2,1};
int  n= sizeof(a)/sizeof(a[0]);  
int s=0;
 int e= n-1;
    cout<<reverse(a,n,s,e);
        //  for(int i=0; i<n; i++){
        //     cout<<a[i]<<" ";
        //  }
return 0;
}