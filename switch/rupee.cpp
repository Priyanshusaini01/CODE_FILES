#include<iostream>
using namespace std;


int main(){
 
 
// int totalnote=1;/
int totalnote;
cin>>totalnote;
cout<<":Enter totalnotes :"<<totalnote<<endl;
int hundred100=100;
int fifty50=50;
int twenty20=20;
int one=1;
int rupee;
cin>>rupee;

cout<<endl;
switch(rupee){
case 1: cout<<" notes required for 1330 money in hand using 100 notes:"<<totalnote/hundred100<<endl;
break;
case 2: cout<<" notes required for 1330 money in hand using 50 notes:"<<totalnote/fifty50<<endl;
break;
case3:cout<<"  notes required for 1330 money in hand using 20 notes:"<<totalnote/twenty20<<endl;
break;
default: cout<<"no case found "<<endl;
}
return 0;
}