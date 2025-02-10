#include<iostream>
using namespace std;

//copy the value to the parts
void merge(int *arr,int s,int e)
{
     int mid= (s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int *first=new int [len1];
    int *second=new int [len2];
// for copying first 
    int k2=s;
    for(int i=0;i<len1;i++)
    {
        first[i]=arr[k2++];
    }
    // for 2nd case 
      k2=mid+1;

    for(int j=0;j<len2;j++)
    {
        second[j]=arr[k2++];
    }


   // merge2sort 
 int index1=0;
 int index2=0;
     k2=s;
     while(index1<len1 && index2<len2)
     {
        if(first[index1]<second[index2])
        {
            arr[k2++]=first[index1++];
        }
        
        else
        {
            arr[k2++]=second[index2++];
        }
     }
     
      while(index1 < len1) {
        arr[k2++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[k2++] = second[index2++];
    }

    delete []first;
    delete []second;


}

  

void mergesort(int * arr,int s ,int e)
{
   
    if(s>=e)
    {
        return;
    }
    int mid= (s+e)/2;
    // left part to sort 
    mergesort(arr,s,mid);

    mergesort(arr,mid+1,e);

    //merge
    merge(arr,s,e);
     
}
int main(){
int arr[15]={ 3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
int size=15;
mergesort(arr,0,size-1);
for (int i = 0; i < size; i++)

{
    cout<<arr[i]<<" ";
    /* code */
}



return 0;
}