
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the largest number after k swaps.
    string solve(int i,int j,string str,int k){
        
        if(k==0)return str;
        while(i<=j){
            if(str[i]<=str[j]){
                swap(str[i],str[j]);
                solve(i+1,j,str,k-1);
            }
            else{
                solve(i,j-1,str,k);
            }
            
        }
        return str;
    }
    string findMaximumNum(string str, int k)
    {
        int j=str.size()-1;
       solve(0,j,str,k);
       return str;
    }
};
int main()
{
    int t, k;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> k >> str;
        Solution ob;
        cout<< ob.findMaximumNum(str, k) << endl;
    }
    return 0;
}