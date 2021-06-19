#include <iostream>
using namespace std;

///set ith bit
// 5 => 000101
// set 2nd bit from left, it is already set but lets do it
// 000101
// 000100 //1<<2
// perform or on these two
// 000101 // result 


int main() {
  int n;
  cin>>n;
  int i;
  cin>>i;

  int mask = 1<<i;
  int bit = n | mask;
  cout<<bit;
    
} 
//input 5    set 1st bit   000101 to 000111
// output 7 correct 