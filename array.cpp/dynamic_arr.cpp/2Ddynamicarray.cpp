#include<iostream>
using namespace std;


int main(){
    int row;
    cin>>row;
    int col;
    cin>>col;

int **arr=new int*[row];
for (int i = 0; i < row; i++)
{
    arr[i]=new int[col]; // taking value in the array row wise
    /* code */
}
//taking input 
for (int i = 0; i <row; i++)

{
    for (int j = 0; j < col; j++)
    {
        cin>>arr[i][j];
    }
    
    
}
cout<<endl;
// taking output
for (int i = 0; i < row; i++)

{
    for (int j = 0; j < col; j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    
    
}

// relaeasing memmory 
for (int  i = 0; i < row; i++)
{
    /* code */delete  []arr[i]; // delete array 
}
delete []arr;  // delete column





return 0;
}