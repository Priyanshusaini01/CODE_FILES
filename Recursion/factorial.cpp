#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)
    return 1;
     
        int f=factorial(n-1);
    
    return n* f;
}
int main(){
int n;
cin>>n;
int ans=factorial(n);
cout<<ans;
return 0;
}