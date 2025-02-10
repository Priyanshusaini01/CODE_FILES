#include<iostream>
using namespace std;


int main(){
int num=1;
int ch='2';
cout<<endl;
switch(ch){
case 1: cout<<"enter the num :"<<num<<endl;
break;
case '2': cout<<"enter the value of second value  :"<<ch<<endl;
break;

default: cout<<"no case found "<<endl;
}
return 0;
}