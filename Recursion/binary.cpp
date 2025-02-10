#include<iostream>
using namespace std;
void print(int *arr,int s,int e)
{
    for (int i =s; i < e; i++)
    {
        cout<<arr[i]<<" ";
        
        /* code */
    }
    cout<<endl;
}
bool  binarysearch(int *arr,int s,int e,int k)
{
    print(arr,s,e);
    //base case
    if(s>e)
    return false;
  
    int mid= (s+e)/2;

cout<<" value of mid :"<<arr[mid]<<endl;

    if(arr[mid]==k)
    {
        return 1;
    }
if(arr[mid]<k)
    {binarysearch(arr,mid+1,e,k);
    }

    else{
        binarysearch(arr,s,mid-1,k);
    }
}

int main(){
    int arr[8]={2,34,35,56,90,654,4344,5453};
    int size=8;
    int key =5453;

   bool ans =binarysearch(arr,0,8,key);

   if(ans)
   {
    cout<<"found"<<endl;
   }
else
{
    cout<<"not";
}
return 0;
}