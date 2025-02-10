#include<iostream>
#include <bits/stdc++.h>
using namespace std;
// using hasing 

void  duplicate(string s)
{
    unordered_map<char,int> count;
    for(int i=0; i<s.length(); i++)
    {
     count[s[i]]++; // increase count by 1 ;
    }

    // now cehck for count if more than 1 then duplicate found 

    for(auto it: count){
        if( it.second>1)
        {
             cout << it.first << ", count = " << it.second
                 << "\n";
        }
    }


}

int main()
{
    string str = "Priyanshu_saini";
    duplicate(str);
    return 0;
}