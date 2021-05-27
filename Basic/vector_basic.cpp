#include<bits/stdc++.h> 
using namespace std;
 
//sending vector as a parameter is expensive, its making
//copy of it, so instead pass the reference of vector
// void print_vector(vector<int> &a)
//now changes in this loop will be reflected in original vector
 void print_vector(vector<int> a)
 {
 	for(int i=0;i<a.size();++i){
 		cout<<a[i]<<" ";
 	}
 	//a.size() will give us the size of a vector  
 }
 
int main(){

	#ifndef ONLINE_JUDGE
			freopen("input.txt","r",stdin);
			freopen("output.txt","w",stdout);
	#endif
	
	vector<int> a; //dynamic size
	//vector<int> a(10); //its stil dynamic, 11 elements, 9 elements //Correct
	//vector<int> a(3,9);  // output : 9 9 9 
	int n;
	cin>>n;

	int x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		a.push_back(x); //add  at last 
		//a.pop_back(x); // remove last element
	} 
	
	print_vector(a);

	//copying vector , expensive operation
	vector<int> b = a; // O(1) operation for n elements O(n)
	//changes in b will not reflect in a now
	b.push_back(5);
	print_vector(b);

 }
//if you are declaring local vector, you can't add more than
//10^5 elements same as array // *for online platforms
//Globally 10^7 limit for elements same as array
//this is because of continious memory allocation
 