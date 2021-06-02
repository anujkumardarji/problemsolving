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
		 int a,b,c,d,k;
		 cin>>a>>b>>c>>d>>k;

		 //this is how we will find the distance between a,b and c,d	
		 int distance = abs(a - c)+abs(b - d);

		 // k > distance
		 // odd even parity in grid
		 // distance = 5 and k = 9 for ex
		 // both odd so this is possible
		 // both must be same odd or even
		 // we have to waste steps in 9, 4 steps waste


		 if(k>=distance && k%2 == distance%2)
		 {
		 	cout<<"YES"<<endl;
		 }
		 else
		 {
		 	cout<<"NO"<<endl;
		 }

	}
}


