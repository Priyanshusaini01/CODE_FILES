#include<iostream>
using namespace std;

int solve ( int i ,int j,string s, char ch [6][6], int size,int idx)
{
    int found =0;

    if( ch[i][j]== size)
    {
        found +=1;
    }

    if( i>=0 && j>= 0 &&  i<6 && j<6 &&  ch[i][j]== s[idx] )
    {
             char temp = s[idx];  // store 
              idx+=1;
              ch[i][j]=0; // visited marked
              if( idx== size )
              {
                found=1;
              } 
               else 
    {
        found += solve ( i+1 , j ,s,ch, size, idx);
        found += solve ( i , j+1 ,s,ch, size, idx);
        found += solve ( i-1 , j ,s,ch, size, idx);
        found += solve ( i , j-1 ,s,ch, size, idx);  // all possoble ways to find uot the vale=ue of geeks
    }
    ch[i][j]= temp; // backtracking 

}
return found ;
}

int main(){


int ans= 0;
int size =5;
string s= "geeks";
 char ch [6][6]= {{'d','d','d','g','d','d'},
                {'b','b','d','e','b','s'},
                {'b','s','k','e','b','k'},
                {'d','d','d','d','d','e'},
                {'d','d','d','d','d','e'},
                {'d','d','d','d','d','g'},};

  
    int idx=0;
    for( int i=0; i<6; i++)
    {
        for( int j=0; j<9 ; j++)
        {

            ans += solve ( i , j ,s, ch , size , idx);  // increment  and call the function ;
        }
    }
    cout<< ans;


return 0;
}