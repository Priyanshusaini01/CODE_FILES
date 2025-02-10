#include<iostream>
using namespace std;

bool ispresent(int arr[][4],int target ,int r,int c)
{
 for (int r = 0; r < 3; r++)
 {
    for (int c = 0; c < 4; c++)
    {
       if(arr[r][c]==target)
       {
        return 1;
       }
        
    }
   
 }
  return 0;
}

void rowsum(int arr[][4],int r,int c)
{
    for (int i = 0; i < 3; i++)
{       int sum=0;
    for (int j = 0; j < 4; j++)
    {
        sum+=arr[i][j] ;
        /* code */
    }
   cout<<sum<<" ";
}
 cout<<endl;
}
int  largestsum(int arr[][4],int r ,int m)
{
     for (int i = 0; i < 3; i++)
{       int maxi=INT8_MIN;
        int sum=0;              
    for (int j = 0; j < 4; j++)
    {
        sum+=arr[i][j] ;
        /* code */
    }
    if(sum>maxi)
    maxi=sum;
    
}
 
}

int main(){
int arr[3][4];
// //taking input column wise
// for (int j = 0;j < 4; j++)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         cin>>arr[i][j];
//         /* code */
//     }
// }

//taking input row wise
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    {
        cin>>arr[i][j] ;
        /* code */
    }
    cout<<endl;
}


//taking output 
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    {
        cout<<arr[i][j]<<" ";
        /* code */
    }
    cout<<endl;
}

cout<<"element to serch"<<endl;
int target;
cin>>target;
if(ispresent(arr,target,3,4))
{
    cout<<"element is found"<<endl;
}
else{
    cout<<"not found"<<endl;
}
rowsum(arr,3,4);

int ansindex=largestsum(arr,3,4);
cout<<"largest element is :"<<ansindex<<endl;

 
return 0;
}