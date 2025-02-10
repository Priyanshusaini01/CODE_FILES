#include<iostream>
using namespace std;


int main(){
int n;
cin>>n;
int a=0;
int b=1;
for (int i = 0; i <=n; i++)
{
int next_sum=a+b;
    cout<<next_sum<<" ";
    a=b;
    b=next_sum;
    /* code */
}

return 0;
}