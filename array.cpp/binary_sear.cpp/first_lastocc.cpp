#include<iostream>
using namespace std;

int first_occurance(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
 int ans=-1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
          ans=mid;
          e=mid-1;
        }
         if(key >arr[mid])
        {
            s=mid+1;
        }
           else if(key< arr[mid]){
            e=mid-1;
        }
       mid=(s+e)/2;
    }
     return ans;
}
int last_occurance(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans=-1;
    while (s<=e)
    {
        if(arr[mid]==key)
        {
          ans=mid;
          s=mid+1;
        }
         if(key> arr[mid])
        {
            s=mid+1;
        }
        else if(key< arr[mid]){
            e=mid-1;
        }
       mid=(s+e)/2;
    }
     return ans;
}
int main(){

int even[7]={1,3,4,6,2,5,5};
// int odd[7]={6,3,7,9,3,1,9};

int index= first_occurance(even,7,5);
int in= last_occurance(even,7,5);
cout<<"the first occ element is 5 :"<<index<<endl;
cout<<"the last occ element is 5 :"<<in <<endl;
 
 
return 0;
}