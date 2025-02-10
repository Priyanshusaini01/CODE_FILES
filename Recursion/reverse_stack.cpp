#include<bits/stdc++.h>
 
using namespace std;
class Solution{
public:
void insert(int ele,stack<int>& St){
 // insert into bottom
    if(St.size()==0){
         
        St.push(ele);
        return;
    }
        int top= St.top(); //1
        St.pop();

        insert(ele,St);
        St.push(top);// 1 push      
   }
    void Reverse(stack<int> &St){ // reverse functinon only for pop
        if(St.size()==0) return;
   
        int top = St.top(); //5 
        St.pop();//5
        Reverse(St);
        insert(top,St);

    }
};
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}