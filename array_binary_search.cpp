#include<bits/stdc++.h>
#include<string>
using namespace std;
 
int binary_search(int a[],int n, int key)
{
	int start = 0;
	int end = n-1;

	int mid = (start+end)/2;

	if(a[mid] == key)
	{
		return mid;
	}
	else if(a[mid]>key)
	{
		end = mid - 1;
	}
	else
	{
		start - mid + 1;
	}

	return -1;
} 

int main(){

	#ifndef ONLINE_JUDGE
			freopen("input.txt","r",stdin);
			freopen("output.txt","w",stdout);
	#endif
	 
	 int n,key;
	 cin>>n;

	 int a[1000];
	 for(int i=0;i<n;i++)
	 {
	 	cin>>a[i];
	 }
	 cin>>key;

	 cout<<binary_search(a,n,key);
}


 