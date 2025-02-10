#include<iostream>
using namespace std;
int solve( int *a,int n,int cnt){
    if(n==0) return cnt;
    cnt++;
    return solve(a, n-1,cnt);
}

int main(){
 int a[]= {1,2,34,5,6,7,8};
int  n= sizeof(a)/sizeof(a[0]);  
 cout<<solve(a,n,0);

return 0;
}