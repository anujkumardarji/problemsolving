#include<bits/stdc++.h>
#include<string>
using namespace std;

int find_key(int arr[],int n,int key)
{
	int start = 0;
	int end = n-1;
	int mid; 

	while(start<=end)
	{
		mid = (start+end)/2;
		if(arr[mid] == key)
		{
			return mid;
		}
		else if(arr[start]<=arr[mid])
		{
			if(arr[start]<= key && arr[mid]>=key )
			{
				end = mid - 1;
			}
			else
			{
				start = mid + 1;
			}
		}
		else
		{
			if(key>=arr[mid] && key<=arr[end])
			{
				start = mid + 1;
			}
			else
			{
				end = mid - 1;
			}
		}
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

	int arr[1000];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>key;

	cout<<find_key(arr,n,key)<<endl;
 }


 