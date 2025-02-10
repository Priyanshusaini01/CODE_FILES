#include<iostream>
using namespace std;

void merge(int *arr,int s,int e )

{ int mid=(s+e)/2;
    int l1=mid-s+1;
    int l2=e-mid;
    int * ft= new int[l1];
    int * sec= new int[l2];

    //now copying
    int k=s;

     for (int  i = 0; i <l1 ; i++)
     {
       ft[i ] =arr[k++] ;
        /* code */
     }
     k=mid+1;
     for (int  j = 0; j <l2 ; j++)
     {
        sec[j]=arr[k++];
        /* code */
     }
     
     //sort the two array 
int index1=0;
int index2=0;
    k=s;
     while(index1<l1 && index2<l2)
     {
        if(ft[index1]<sec[index2]){
        arr[k++]=ft[index1++];}

        else
        {
            arr[k++]=sec[index2++];
        }
     }
while(index1<l1)
{
        arr[k ++] = ft[index1++];
}
while(index2<l2)
{
    arr[k++]=sec[index2++];
}

    delete []ft;
    delete []sec ;
}

void mergesort(int * arr,int s, int e)
{
    if(s>=e)
    {
        return;
    }
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    
    merge(arr,s,e);
}
int main(){
int arr[8]={2,9,3,8,4,7,5,6};
int n=8;
mergesort(arr,0,n-1);

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
     
}

return 0;
}