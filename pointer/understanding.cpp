
#include<iostream>
using namespace std;

void f1(int * ptr )
{
    cout<<*ptr<<endl;
}
void update(int * ptr)
{    *ptr=*ptr+1;
    // cout<<"inside:"<<ptr<<endl;
}
int main(){
int var= 5;
int * ptr= &var;
f1(ptr);
 
cout<<"before update:"<<*ptr<<endl;
update(ptr);
cout<<"after update:"<<*ptr<<endl;

// int arr[10]={1,3,56,6,5};

// cout<<&arr<<endl;

// cout<<*arr<<endl;

// cout<<*arr+1<<endl; // value taken form index then print
// cout<<*(arr+1)<<endl;// value of valie location is taken from arrr and then incr,entntd by index (i)
// cout<<*(arr+2)<<endl;

// int temp[10];
//    cout << sizeof(temp) << endl;
//    cout << " 1st " <<  sizeof(*temp) << endl;

//    int *ptr= &temp[0];
//    cout<<sizeof(ptr)<<endl;
//    cout<<sizeof(*ptr)<<endl;
//    cout<<sizeof(&ptr)<<endl;

//     int a[20] = {1,2,3,5};
//    cout << " ->" << &a[0] << endl;
//   cout << &a << endl;
//    cout << a << endl;

//      int *p = &a[0];
//    //cout << p << endl;
//    //cout << *p << endl;
//    cout << "-> " << &p << endl;


 // symbol table conept 
 //you cant be change arr = arr+ 1 , but by using ptr it will done by increment 4 bytes . 

//    int arr[10];

//ERROR
    // arr = arr+1;

    // int *ptr = &arr[0];
    // cout << ptr << endl;
    // ptr = ptr + 1;
    // cout << ptr << endl;


// in case of charater array 

// cout works diff as int case . here char arr print data where in case of int it will show data 

// char ch[5]= "abcd";
//  cout<<ch<<endl;
//  cout<<&ch<<endl;
//  char *p=&ch[0];
//  cout<<ch;

// function concept

return 0;
}