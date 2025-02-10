#include<iostream>
#include<vector>
using namespace std;
int length(char name[])
{
    int count=0;

    for (int i = 0; i < name [i]!='\0'; i++)
    {
        count++;

        
    }
    return count;


}
char maxoccurance(string s )// create arr count 
{
    int arr[26]={0};
    for (int i = 0; i <s.length() ; i++)
    { char ch = s[i];
        int number=0;
        if(ch>='a' &&ch<='z')
        {
            number = ch-'a';
            arr[number]++;
        }
         
    
    }
    int maxi=-1;
    int ans=0;
    for(int i=0;i<26;i++)
    {  
        if(maxi<arr[i])

       { ans=i;
        maxi=arr[i];
        }

    }
    return 'a'+ans;
}

int main(){
    string s ;
    cin>>s;
cout<<maxoccurance(s)<<endl;
return 0;
}