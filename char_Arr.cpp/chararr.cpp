#include<iostream>
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
int main(){
char name[90];
cin>>name;
cout<<"name-"<<name<<endl;
cout<<"length of the name:"<<length(name)<<endl;


return 0;
}