#include <iostream>
using namespace std;
int main() {
    // 10101010111 //i = 3 // result : 10101010000
    // step 1 : 11111111111  // cout<< (~0) is -1
    // step 2 : shift i times left step1<<i
    // input : 15 , 3 output : 8 
    int n,i;
    cin>>n>>i;

    int mask = -1<<i;
    int result = mask&n;
    cout<<result;
}
