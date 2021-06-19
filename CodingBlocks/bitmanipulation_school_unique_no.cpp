#include <iostream>
using namespace std;

//given numbers, all numbers occurs two times
// but only one uniqure number is there
// who occurse only one time find that number  
int main() {
    
    int n;
    cin>>n;
    int ans=0;
    int no;

    for(int i=0;i<n;i++){
        cin>>no;
        ans = ans ^no; 
    }

    cout<<ans;
}
//5  input
//1 2 5 2 1  input
// 5 output