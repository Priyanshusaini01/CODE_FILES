#include<iostream>
using namespace std;

bool solve ( int *a, int n, int m, int mid )
{int sum =0;
    for(int i=0; i<n ; i++){
        if(a[i]>mid) sum+= a[i]-mid; 
                   
    }
    if(sum>= m){ // sum can be greater than required   
        return true;
    }
    else return false;

}
int main(){
    // take inpput of the n and m 
    int n; // number of tree
    int m; // wood required 
    int a[n];
    cout<<"enter n and m"<<endl;
    cin>> n>>m;
    for( int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    // init
    int lb=0; 
    int ans=0;
    int ub =-1;
    while( lb<= ub)
    {
        int mid= (lb + ub )/ 2;
        if(solve( a, n, m, mid)){
            ans= mid; //update ans ;
            lb= mid+1; // move to right 

        }
        else ub = mid-1; // move ub to left 
        
    }
    cout<<ans;

return 0;
}