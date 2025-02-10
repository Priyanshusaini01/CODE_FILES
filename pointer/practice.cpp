#include<iostream>
using namespace std;


int main(){
int p = 5;
int * ptr= &p;
cout<< "address-"<<&p<<endl;
cout<<" value "<<*ptr<<endl;
cout<<" value "<<&ptr<<endl;

return 0;
}