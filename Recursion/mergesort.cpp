#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; 
    int left =low;
    int right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else  {
            temp.push_back(arr[right]);
            right++;
    }
  
    }

    while(left<=mid);
         {  
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high)
     {  temp.push_back(arr[right]);
        right++;
    }
    
    // Copy elements from temp back to original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low]; 
    }
}


void mergesort(vector<int> &arr, int low, int high) {
    if (low >= high) { 
        return;
    }
    int mid = low + (high - low) / 2;
    mergesort(arr, low, mid);
    mergesort(arr,mid+1,high);
  
    merge(arr, low, mid, high);
}

int main() {
    vector<int> arr = {3, 2, 4, 1, 3}; 

    int n = arr.size();
    // int mid = n / 2;

    mergesort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}