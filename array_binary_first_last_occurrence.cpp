#include<bits/stdc++.h>
#include<string>
using namespace std;
 
int first_occurrence(int arr[],int n,int key)
{
	int start = 0;
	int end = n-1;

	int mid;
	int answer = -1;
	while(start<=end)
	{
		mid = (start+end)/2;
		if(arr[mid] == key)
		{
			answer = mid;
			end = mid - 1;
		}
		else if(arr[mid]>key)
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
	
	return answer;

}  

int last_occurrence(int arr[],int n, int key)
{
	int start = 0;
	int end = n-1;
	int answer = -1;
	int mid;
	while(start<=end)
	{	
		mid = (start+end)/2;
		if(arr[mid] == key)
		{
			answer = mid;
			start = mid + 1;
		}
		else if(arr[mid]>key)
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
	return answer;
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

	 cout<<first_occurrence(arr,n,key)<<endl;
	 cout<<last_occurrence(arr,n,key);
}


 