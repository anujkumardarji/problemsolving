#include<bits/stdc++.h>
#include<string>
using namespace std;
  
int main(){

	#ifndef ONLINE_JUDGE
			freopen("input.txt","r",stdin);
			freopen("output.txt","w",stdout);
	#endif
	
	int n,key;
	cin>>n;

	int arr[1000];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>key;

	bool present = binary_search(arr,arr+n,key);
	if(present)
	{
		cout<<"present"<<endl;
	}
	else
	{
		cout<<"not present"<<endl;
	}

	auto lowerbound = lower_bound(arr,arr+n,key);
	if((lowerbound-arr) == n)
	{
		cout<<"element is not present"<<endl;
	}
	
	cout<<"Present at positition : "<<(lowerbound-arr)<<endl;


	auto upperbound = upper_bound(arr,arr+n,key);
	cout<<"Present at positition : "<<(upperbound-arr)<<endl;

	cout<<"frequency of key : "<<(upperbound - lowerbound)<<endl;

}


 