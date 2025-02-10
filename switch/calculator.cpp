#include<iostream>
using namespace std;


int main(){
int a,b;
cin>>a;
cin>>b;
char x;
cout<<"which case you want to perform:"<<endl;
cin>>x;
switch(x)
{     
    case '+':cout<<"add:"<<a+b<<endl;
    break;
    case '-':cout<<"sub:"<<a-b<<endl;
    break;
    case '*':cout<<"mul:"<<a*b<<endl;
    break;
    case '/':cout<<"divide:"<<a/b<<endl;
    break;
    case '%':cout<<"modules:"<<a%b<<endl;
    break;

}
return 0;
}