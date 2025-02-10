#include<iostream>
using namespace std;
            //int * arr also right
int getsum(int arr[], int n){
 
    int sum=0;
    for(int i=0; i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
int arr[6]={1,2,3,4,6};
cout<<getsum(arr,5);
cout<<getsum(arr+3,3);// also applicable in specific part to sum

return 0;
}