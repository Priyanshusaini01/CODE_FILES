#include<iostream>
using namespace std;
// stack implementation using array
class stack{
    public:
    int top;
    int *arr;
    int size ;

     stack(int size)
     {
        this->size=size;
        arr =new int[size];
        top=-1;
     }

     void push(int element )
     {
        if(size-top>1)
        {
            top++;
            arr[top]=element;
        }
        else
        {
            cout<<"stck overflow "<<endl;
        }
        
     }
     void pop(  )
     {
        if(top>=0)
        {
            top--;
            // arr[top]=element;
        }
        else
        {
            cout<<"stack is underflow"<<endl;
        } 
     }


int peek()
{
    if(top>=0    )
    {
        return arr[top];
    }
    else
    {
        cout<<" stack is empty"<<endl;
    }

}

bool isempty()
{
if(top==-1)
{
    return true;
}
else
{cout<<" not"<<endl;
}
}


};
int main(){
 stack element(5);

 element.push(11);
 element.push(12);
 element.push(13);
 element.pop();
 element.pop();
 element.pop();
 cout<<element.peek()<<endl;

 if(element.isempty())
 {
    cout<<" yes "<<endl;
 }
 else
 {
    cout<< "not "<<endl;
 }
return 0;
}