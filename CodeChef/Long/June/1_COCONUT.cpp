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
 		int c_water,c_pulp,r_water,r_pulp;
 		cin>>c_water>>c_pulp>>r_water>>r_pulp;

 		
 		cout<<(r_water/c_water) + (r_pulp/c_pulp)<<endl;



 		 
	}
}


