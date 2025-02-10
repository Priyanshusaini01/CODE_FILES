#include<iostream>
using namespace std;


int main(){

int i=5;
int *ptr=&i;
int **ptr2=&ptr;

cout<<"i"<<i<<endl;
cout<<"i address"<<&i<<endl;
cout<<"ptr"<<*ptr<<endl;
cout<<"ptr address-"<<&ptr<<endl;
cout<<"ptr2"<<**ptr2<<endl;
cout<<"ptr2"<<&ptr2<<endl;


cout<<"i-"<<i<<endl;
cout<<"ptr-"<<*ptr<<endl;
cout<<"ptr2-"<<**ptr2<<endl;

cout<<"i-"<<&i<<endl;
cout<<"ptr-"<<ptr<<endl;
cout<<"ptr2-"<<*ptr2<<endl;
return 0;
}