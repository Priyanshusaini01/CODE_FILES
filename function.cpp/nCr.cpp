#include<iostream>
using namespace std;

int facto(int n){
int  facto=1;

for(int i=1;i<=n;i++)
{
  facto=facto*i;  
}
return facto;
}

int ncr(int n,int r){
    int num=facto(n);
    int deno=  facto(r) * facto(n-r);
    return num/deno;}
    
int main()
    {
    int n,r;
    cin>>n>>r;

 
cout<<"factorial is :"<<ncr(n,r)<<endl;


return 0;
}