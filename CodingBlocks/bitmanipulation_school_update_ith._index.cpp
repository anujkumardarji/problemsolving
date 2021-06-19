#include <iostream>
using namespace std;

// given v = 1 or 0 // update v at index i 
// n = 5 , i = 0 , v = 0 
// 000101 to 000100
//1st clear  the bit 000101 => 000001
// mask 000001 // 0 is v here
// then do end with original
// mask ~(1<<i)


// n = 5 ,i = 1 , v = 1
// 000101 to 000010
// this is what we want to achieve
// 1st clear the bit 000101 => 000010
// or with original one 

int main() {
  int n;
  cin>>n;
  int i;
  cin>>i;
    int v;
    cin>>v;

  int mask = ~(1<<i);
  int cleared_n = n & mask;
  n =  cleared_n | (v<<i);
  cout<<n;
    
} 
//5 
//0
//0
//out put 4 