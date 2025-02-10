#include<iostream>
using namespace std;
// void reverse(int arr[],int n)
// {
//     int start=0;
//     int end=n-1;
//     while(start<=end)
//     {
//        swap(arr[start],arr[end]);
//        start++;
//        end--;
        
//     }
// }
// int printarr(int arr[],int n)
// {
//      for (int i = 0; i<n; i++)
//         {
//             cout<<arr[i]<<" ";
//             /* code */
//         }
//         cout<<endl;
// }
// int main(){
// int arr[5]={8,7,6,5,4};
// // int brr[4]={6,5,4,3};

// reverse(arr,5);
// // reverse(brr,4);

// printarr(arr,5);
// // printarr(brr,4);


// return 0;
// }

void reverse(int arr[],int n){
    int s= 0;
    int e= n-1;
    while(s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int printarr(int arr[],int n)
{
     for (int i = 0; i<n; i++)
        {
            cout<<arr[i]<<" ";
            /* code */
        }
        cout<<endl;
}
int main(){
int arr[5]={8,7,6,5,4};
// int brr[4]={6,5,4,3};

reverse(arr,5);
// reverse(brr,4);

printarr(arr,5);
// printarr(brr,4);


return 0;
}