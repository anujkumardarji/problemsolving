#include<bits/stdc++.h> 
using namespace std;
  
int main(){

	#ifndef ONLINE_JUDGE
			freopen("input.txt","r",stdin);
			freopen("output.txt","w",stdout);
	#endif
	
 	
 	//formulas: 
	// (a+b)%m  = ((a%m) + (b%m)) % m
	// (a*b)%m  = ((a%m) * (b%m)) % m
	// (a-b)%m  = ((a%m) - (b%m) + m) % m
	// the value can be negative thats why we added 
	// +m in the last equation so that we can make it positive
	// (a/b)%m  = ((a%m)*(b^-1)%m) % m
	// here b^-1 is multiplication inverse

	// program to write factorial		
	int n;
	cin>>n;

	long long fact = 1;
	for(int i=2;i<=n;++i)
	{
		fact = fact * 2;
	} 	 			

	cout<<fact;

	// input : 20 // ouput will be there // long long is capable
	// input : 21 // give nagative value as a output 
	// 21! is big number so longlong is overflowed
	// when answer is very big then print answer modulo M
	// where M = 47

	// if you do 4%3 answer will be 3 or less 
	// so here n % 47 so anser will be 47 or less
	// but here we have to use properties of module

	//7:30
	//Link : https://www.youtube.com/watch?v=RCq5TYMZEwg&list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&index=17

 }




 