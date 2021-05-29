#include<bits/stdc++.h> 
using namespace std;
 
 int dist(int a,int b)
 {
 	return abs(a - b);
 } 

int main(){

	#ifndef ONLINE_JUDGE
			freopen("input.txt","r",stdin);
			freopen("output.txt","w",stdout);
	#endif
	int t;
	cin>>t;

	while(t--){
		int n,k;
		cin>>n>>m;
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		sort(all(a));
		int mid = a[n/2];
		int result = INT_MAX;

		for(int j=0;j<2;j++)
		{
			int left = (k-1)/2;
			int right = k - 1 - left;

			left = mid - left;
			right = mid + right;

			if(j==1)
			{
				swap(left,right);
			}
			int ans = 0;
			for(int x:a){
				ans += max(dist(x,left),dist(x,right)); 
			}
			result = min(result,ans);
		}
		cout<<result<<endl;

	}	
}


 