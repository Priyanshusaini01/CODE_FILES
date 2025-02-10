#include<iostream>
using namespace std;

bool iseven(int var)
{
    if(var&1)
    {
        return 0;
    }
    return 1;
}

int main(){
int var;
cin>>var;

   if(iseven(var))
{
    cout<<"Number is even : "<<endl;

}
else
{
    cout<<" not even "<<endl;
}
return 0;
}