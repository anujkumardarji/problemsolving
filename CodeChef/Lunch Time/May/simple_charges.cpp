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

 		string s;
 		cin>>s;

 		long long len = n-1;

 		for(long long i =1;i<n;i++)
 		{
 			len+= s[i] == s[i-1];
 		}

 		while(k--)
 		{
 			long long q;
 			cin>>q;
 			q--;

 			if(s[q] == '1')
 			{
 				s[q] = '0';
 			}
 			else
 			{
 				s[q] = '1';
 			}


 			if( q < n-1)
 			{
 				if(s[q] == s[q+1]){ len++; }
 				else { len--;}
 			}

 			if(q > 0)
 			{
 				if(s[q] == s[q-1]) {len++;}
 				else {len--;}
 			}

 			cout<<len<<endl;
 		}
	}
}


