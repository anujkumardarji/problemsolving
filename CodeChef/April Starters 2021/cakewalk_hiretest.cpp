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
		int n,m,x,y;
		cin>>n>>m>>x>>y;
		
		
		for(int i=0;i<n;i++)
		{
			string a;
			cin>>a;
			int f = 0;
		int p = 0;
			for(char c:a)
			{
				 
				if(c =='F'){f++;} 
				if(c=='P'){p++;}
				
			}
			if(f >= x || (f == x - 1 && p>=y))
				{
					cout<<1;
				}
				 
				else {cout<<0;}	
		}
		
		cout<<endl;
		}	
}


 