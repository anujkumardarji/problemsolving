#include <iostream>
using namespace std;

//get ith bit
// ex. input 5 : get 2nd bit in 5 
// 000101  <=5
// 000100 <= create this kind of number and then take &
// result => 000100 what we needed
//if( 5 & (1 << 2) ) > 0 , masked 1 
//N & (i<<2) > 0
//otherwise 0



int main() {
  int n;
  cin>>n;
  int i;
  cin>>i;

  int mask = 1<<i;
  int bit = n & mask > 0 ? 1 : 0;
  cout<<bit; 
    
} 
//input 5
// output 1 