
#include <iostream>
using namespace std;
int main() {
    // clear range of bits from i to j 
    //0001111
    //i=1,j=3 index i to j
    //step 1 : 1110001 mask 

    //A//11111 000000
    //B//00000 000011
    //OR
    //11111 000011 <= mask 

    //to create A , step1. all 1's 11111 111111 (~0)
                  // step2.  step1<<j+1  
    // to create B, 2^i -1 = 1<<i - 1
                            //1 << i = 1110000
                            // 1<<i - 1 = 0001111
   // mask = a | b
    // no = no & mask
    int i,n,j;
    cin>>i>>n>>j;
    int ones = (~0);
    int a = ones<<j+1;
    int b = (1<<i) - 1;
    int mask = a|b;
    int ans = n&mask;
    cout<<ans;
    // n = 31, i = 1, j = 3 // ans : 17
    //0000 11111 => 0000 10001 
    

}
