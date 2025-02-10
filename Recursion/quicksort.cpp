#include<iostream>
using namespace std;
int partation(int arr[] ,int s, int e)
{int pivot=arr[s];

int cnt=0;
for (int i = s+1; i <= e; i++)
{
    if(arr[i]<=pivot)
    {
        cnt++;
    }
    /* code */
} // for doing this i n=know the exact loc of pivot 

//that is 
int pivotindex=s+cnt;

swap(arr[pivotindex],arr[s]); 

  int i=s; int j=e;// start end ending index 
  while(i<pivotindex&&j>pivotindex)
{

        while(arr[i]<=pivot)
        {
            i++;
        }

        while(arr[j]>pivot)
        {
            j--;
        }

        if(i<pivotindex&&j>pivotindex)
        {
            swap(arr[i++],arr[j--]);
        }


}
        return pivotindex;

}
void quicksort(int arr[] ,int s ,int e)
{
    if(s>=e)
    {
        return;
    }

int p=partation(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
}

int main(){

    int arr[10] = {2,4,1,6,9 , 112,45,7653,0};
    int n = 10;
quicksort(arr,0,n-1);

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
     
}

return 0;
}