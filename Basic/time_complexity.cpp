#include<bits/stdc++.h> 
using namespace std;
  
int main(){

	#ifndef ONLINE_JUDGE
			freopen("input.txt","r",stdin);
			freopen("output.txt","w",stdout);
	#endif
	
	// in online platforms
	// 1 sec : 10^7 iterations if this is true then
	// 10 Sec : 10^8 iteratios 
	// 100 sec : 10^9 iterations
	// 1000 sec : 10^10 iterations
	// 10000 sec : 10^11 iterations
	// time increases as iterations increase even small
 
 	//lets say n < 100000
	int n;              // 1
	cin>>n;             // 1
	int a[n];           // 1
	for(int i=0;i<n;i++) // n 
	{
		cin>>a[i];
	}		
	//total complexity : O(3) + O(n) = o(n)
	// n max can go 10^5 here, so it can be executed in 1 sec

	for(int i=0;i<n;i++) // n 
	{
		cin>>a[i];
	}		
	for(int i=0;i<n;i++) // n 
	{
		cin>>a[i];
	}		
	for(int i=0;i<n;i++) // n 
	{
		cin>>a[i];
	}		
	
	//Total Complexity : O(n)+O(n)+O(n) = O(n)
	//until and unless there is a lot of O(n)+O(n)....
	//we can igore them 

	for(int i=0;i<n;i++) // n 
	{
		for(int i=0;i<n;i++) // n 
		{
			cin>>a[i];
		}		
	}		
	//Total Complexity : o(n*n) 
	// n is 10^5 here : O(10^5 * 10^5) : O(10^10)
	// O(10^10) > O(10^7) // cant run in 1 second
	// TLE (Time limit exceeded)

	int x; // O(1)
	cin>>x; //O(1)

	while(x>0)  //O(logn)// worst cas n = 10^5
	{
		x = x/2;
	}
	// lets say in say we can divide x, a times
	// 2^a = x
	//taking log base 2 both side
	// 2 log a = log x // base 2 
	// a = log(x)    	
 
	for(int i=0;i<n;i++) // n 
	{
		for(int j=0; j<i; j++ )
		{

		}
	}		
	
	//  i = 1 // loop 1 :  1 time, loop 2 : 1 
	//  i = 2 // loop 1 :  2 time, loop 2 : 2 
	//  i = 3 // loop 1 :  3 time, loop 2 : 3 time
 	//  . 
 	//  .
	//  i = n // loop 1 : n time, loop 2 : n time
	// 1 + 2+ 3+ .. n
	// (n(n+1)) / 2	
	// (n^2 / 2) + (n/2)
	// ignore n/2 
	// O(n^2)

	//-------------------------

	//Given T Test cases and array of size N,
	//Print sum of array in each test case
	//Constraints : 
	// 1<= T <=1000
	// 1<= N <= 1000
	// 1<= array[i] <= 1000

	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		int sum = 0;
		for(int i=0;i<n;++i)
		{
			int x;
			cin>>x;
			sum+=x;
		}
		cout<<sum;
	}

// two loops : t size and n size
// O(t*n)
// t an n is simmiler here 1000
// t is same as n
// O(n*n)
// O(1000 * 1000)
// O(10^6)
// it can run in one second

// now lets do some changes

//Constraints : 
	// 1<= T <=100000
	// 1<= N <= 100000
	// 1<= array[i] <= 1000
 	// Sum of N over all Test Cases is < 10^7

	// for t = 0 ; n = 0 
	// for t = 1 : n = 1
	// we know that sum can be max 10^7
	//O(10^7) time comp instead O(10^10)
	//O(counter)                O(n*n) 
	
}
