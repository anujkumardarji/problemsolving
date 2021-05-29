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
 		int n,m;
 		cin>>n>>m;

 		int left[n];
 		int right[n];

 		for(int i=0;i<m;i++)
 		{
 			cin>>left[i]>>right[i];
 		}	

 		for(int i=0;i<m;i++)
 		{
 			cout>>left[i]>>right[i];
 		}	
 	}
 }


 