#include<iostream>
using namespace std;
bool checks(string str,int s ,int e){

    if(s>e) return true;
    if(str[s]!=str[e]) return false;
   else return  checks(str,s++,e--);
    
}

int main(){
string str;
cin>>str;
// int arr[n];
bool ispalindrome=checks(str,0,str.length()-1);
// for(int i=0;i<n;i++) cin>>arr[i];

if(ispalindrome){
    cout<<" pakindrome h";
}
else cout<<"NOT";
return 0;   
}