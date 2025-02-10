 

#include<iostream>
using namespace std;
void saydigit(int n,string arr[])
{
    if(n==0)
    {
        return;
    }
    int digit=n%10;
    n=n/10; //update value of n;

    saydigit(n,arr);
    cout<<arr[digit]<<" ";

}

int main(){
int n;
cin>>n;
string arr[10]={"zero","one ","two","three","four"};
saydigit(n,arr);
cout<<endl;
return 0;
}