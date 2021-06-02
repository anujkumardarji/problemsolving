#include<bits/stdc++.h> 
using namespace std;
 
 
int main(){

 
	#ifndef ONLINE_JUDGE
			freopen("input.txt","r",stdin);
			freopen("output.txt","w",stdout);
	#endif 

	int t;
	cin>>t;

	while(t--)
	{
		long long n,k;
		cin>>n>>k;

		vector<long long> arr(n);
		for(auto &x: arr) cin>>x;

		long long s1 = 0;
		long long s2 = 0;

		sort(arr.begin(),arr.end());
		 
			while(k--)
			{
				s1 = s1 + arr.back();
				arr.pop_back();
				s2 = s2 + arr.back();
				arr.pop_back();
			}
			s2 = s2 + arr.back();
			cout<<max(s1,s2)<<endl;
		 


	}
}


