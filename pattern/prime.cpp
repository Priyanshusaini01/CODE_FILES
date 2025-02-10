#include<iostream>
using namespace std;


int main(){
int n;
cin>>n;
int i=1;
while(i<=n)
{
    if(n%i==0)
    {
        cout<<"prime no:"<<i<<endl;
    }
    else
    {
        cout<<"not prime"<<i<<endl;
    }
        i=i+1;
}

return 0;
}