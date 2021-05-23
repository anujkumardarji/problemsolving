#include<bits/stdc++.h>
#include<string>
using namespace std;

bool IsPalindrome(string str, int no, int start)
{ 	 
	if(str[start]== str[no])  
	{
		start = start + 1;  
		no = no-1;  
	 	IsPalindrome(str,no,start);
	  	return true;
	}
	else{ 
	 return false;
	}
}

int main(){

	#ifndef ONLINE_JUDGE
			freopen("input.txt","r",stdin);
			freopen("output.txt","w",stdout);
	#endif
	 
	 int n;
	 cin>>n;

	 char array[n];

	 for(int i=0;i<n;i++)
	 {
	 	cin>>array[i];
	 } 
	 
	 int zero = 0;
	 n = n-1;				 
	 if(IsPalindrome(array,n,zero)==1){ cout<<"true";}
	 else cout<<"false";
	 
}


 