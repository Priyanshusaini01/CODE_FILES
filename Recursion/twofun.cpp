#include<iostream>
using namespace std;
int f( int n) //4
  {  if(n<=1) return n;
    int l= f(n-1);//3
    int sl= f(n-2);//2
    return l+sl;}
int main(){
    int n;
int ans=f(4);
cout<<ans;
return 0;
}