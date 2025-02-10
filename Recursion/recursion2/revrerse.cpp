#include<iostream>
using namespace std;

 void reverse(int *a,int n,int s, int e){
        if(s>e) return  ;
        swap(a[s],a[e]);
        reverse(a,n,s+1,e-1);

 }

int main(){
int a[]= {1,2,3,4,5};
int  n= sizeof(a)/sizeof(a[0]);  
int s=0;
 int e= n-1;
        reverse(a,n,s,e);
         for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
         }
return 0;
}