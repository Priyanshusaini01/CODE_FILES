#include<iostream>
using namespace std;


int solve (int i, int j,string s ,  char ch[6][6],int size  ,int idx )
{
    int found =0; // initialize found 
    if( ch[i][j]== size )
    {
        found +=1;
    }
if( i>=0 && j>= 0 &&  i<6 && j<6  &&   s[idx]==ch[i][j])
{
    char temp = s[idx]; // store 
    ch[i][j]= 0; // visited marked
    idx+=1;  // increment by 1
    if( idx== size )
    {
        found =1;
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

string s = "geeks";

char ch [6][6]= {{'d','d','d','g','d','d'},
                {'b','b','d','e','b','s'},
                {'b','s','k','e','b','k'},
                {'d','d','d','d','d','e'},
                {'d','d','d','d','d','e'},
                {'d','d','d','d','d','g'},};
            
int ans=0;
int size = 5;

for(int i=0; i<6; i++)
{
    for( int j= 0; j<6; j++)
    {
        ans+= solve ( i,j, s, ch,size,0 );  // call function 
    }
}
cout<<"Geeks found : "+ ans +"Times";
 
return 0;
}