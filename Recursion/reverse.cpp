#include<iostream>
using namespace std;

int  reverse(string &str,int i,int j)
{
    if(i> j)
    {
        return 1;
    }

    swap(str[i],str[j]);
    i++;
    j--;

    // recursic=ve calll 
    reverse(str,i,j);
}

      
    
    

int main(){
string name;
cin>>name;

reverse(name,0,name.length()-1);
cout<<name;
return 0;
}