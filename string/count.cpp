#include<iostream>
using namespace std;

int maxsubtring( string str,int n  ){

    int count0=0, count1=0;

    int cnt=0;
    for(int i=0 ; i<n; i++)
    {
        if(str[i]=='0')
        {
            count0++;
        }
        else{
            count1++;
        }

        if( count0== count1)
        {
            cnt++;
        }


    }

    if( count0!= count1)
    {
        return -1;
    }

    return cnt;


}

int main(){
xxxx
    string str = "0100110101";
    int n = str.length();       

    cout<<maxsubtring(str,n);


return 0;
}