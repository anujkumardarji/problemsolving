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
 		 int x,y,xr,yr,d;
 		 cin>>x>>y>>xr>>yr>>d;

 		 int required_x = xr*d;
 		 int required_y = yr*d; 
 		 if(x>=required_x && y>=required_y)
 		 {
 		 	cout<<"YES"<<endl;
 		 }else cout<<"NO"<<endl;

 	}
 }


 