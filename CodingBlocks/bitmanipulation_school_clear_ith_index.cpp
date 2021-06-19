#include <iostream>
using namespace std;

///clear ith bit
// 5 => 000101
// clear 2nd bit from left, 
// 000101
// 000100 //1<<2
// 111011 // ~(1<<2) //mast
// 5 & 111011 
// n & mask
// input 5 // 000101 output // 000001 // 1


int main() {
  int n;
  cin>>n;
  int i;
  cin>>i;

  int mask = ~(1<<i);
  int bit = n & mask;
  cout<<bit;
    
} 
//input 5    set 1st bit   000101 to 000111
// output 7 correct 