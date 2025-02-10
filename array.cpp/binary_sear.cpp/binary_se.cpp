// #include<iostream>
// using namespace std;

// int binary_search(int arr[],int n,int key){
//     int s=0;
//     int e=n-1;
//     int mid=(s+e/2);

//     while (s<=e)
//     {
//         if(arr[mid]==key)
//         {
//           return mid;
//         }
//          if(key> arr[mid])
//         {
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//        mid=(s+e)/2;
//     }
//      return -1;
// }
// int main(){

// int even[6]={1,3,4,6,2,5};
// int odd[4]={6,3,7,9};

// int index= binary_search(odd,4,9);
// int in= binary_search(even,6,5);
// cout<<"the index of the 5th element is :"<<index<<endl;
// cout<<"the index of the 5th element is :"<<in;
 
// return 0;
// }


class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
       int l=0;
       int r=0;
       int mid=(l+r)/2;
        //code here
         while (l<=r)
    {
        if(arr[mid]==k)
        {
          return mid;
        }
         if(k> arr[mid])
        {
            l=mid+1;
        }
        else{
            r=mid-1;
        }
       mid=(l+r)/2;
    }
     return -1;
}
};