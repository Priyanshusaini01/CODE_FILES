#include <iostream>
using namespace std;

bool present(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }

        /* code */
    }
    return 0;
}
int main()
{
    
    int arr[8] = {1, 2, 5, 7, 98, 6, 1, 2};
    int key;
    cin >> key;
    bool found = present(arr, 8, key);
    if (found)
    {
        cout << " present " << endl;
    }
    else
    {
        cout << " not present " << endl;
    }

    return 0;
}
