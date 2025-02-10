#include<iostream>
using namespace std;

bool linearsearch(int  arr[],int size,int k  )
    {
        if(size==0)
         
            return false;
         
        if(arr[0]==k )
        {
            return true;
        }

        else
        {
            bool remainingpart=linearsearch(arr+1 , size-1,k);
            return remainingpart;
        }
    }   

int main(){
int arr[5]={2,3,4,5,6};
int size=5;
int key=3;
bool ans =linearsearch(arr,size,key);

 
if(ans)
{
    cout<<"found";
}
else{
    cout<<"not found";
}
return 0;
}