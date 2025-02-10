#include <bits/stdc++.h> 

char lowercase(char ch)
{
    if  (ch>='a'&& ch<='z')
    {
        return ch;
    }
    else
    {
        char temp= ch-'A'+'a';
        return temp;


    }
}
bool checkpalindrome(char arr[]  ){
    int st=0;
    int e=s.size()-1;
    while(s<=e)
    {
        if(lowercase ( s[st] ) !=lowercase (s[e]))
        {
            return 0;
        }
        else if(checkpalindrome(s[st]))
        {
            st++;
        }
        else{
             st++;
            e--;

        }
        return 1;
    }
    }