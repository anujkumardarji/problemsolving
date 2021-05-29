#include<bits/stdc++.h> 
using namespace std;
  
int main(){

	#ifndef ONLINE_JUDGE
			freopen("input.txt","r",stdin);
			freopen("output.txt","w",stdout);
	#endif
	int t;
	cin>>t;

	while(t--){
		int n,m;
		cin>>n>>m;

		int x,y;
		cin>>x>>y;

		int a,b;
		cin>>a>>b;

		int theif = (n-x)+(m-y);
		int police = max(n-a,m-b);
		if(theif<=police)
		{
			cout<<"YES"<<endl;
		}	
		else{cout<<"NO"<<endl;}
	} 
}


 