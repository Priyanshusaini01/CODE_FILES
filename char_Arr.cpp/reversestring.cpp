#include<iostream>
using namespace std;
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
bool checkpalindrome(char arr[] ,int n){
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        if(lowercase ( arr[s] ) !=lowercase (arr[e]))
        {
            return 0;
        }
        else{
            s++;
            e--;

        }
        return 1;
    }
    }
void reverse(char name[],int n)
{
    int s=0;
    int e=n-1;

   while(s<e)
    {
        swap(name[s++],name[e--]);
        /* code */
    }
    
}
int length(char name[])
{
    int count=0;

    for (int i = 0; i < name [i]!='\0'; i++)
    {
        count++;

        
    }
    return count;


}
int main(){
char name[90];
int len=length(name);
cin>>name;
cout<<"name-"<<name<<endl;
cout<<"length of the name:"<<length(name)<<endl;

reverse(name,len);
cout<<name<<endl;

cout<<"palindrome is or not "<<checkpalindrome(name,len);

return 0;
}