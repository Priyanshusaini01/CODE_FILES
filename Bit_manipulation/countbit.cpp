#include<iostream>
using namespace std;

int countSetBits(int num) {
    int cnt = 0;
    // for (int i = 1; i <= n; i++) {
    //     int num = i;
        while (num > 0) {
            cnt += num & 1;
        }
            num = num >> 1;
    return cnt;
    }
// }
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int num;
	       cin>>num; //input n
	       Solution ob;
	       cout << ob.countSetBits(num) << endl;// print the answer
	  }
	  return 0;
}

 