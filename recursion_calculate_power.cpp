#include<bits/stdc++.h>
#include<string>
using namespace std;
calculate_power(int base,int power)
{	
	int half_value;
	if(power == 0) return 1;
	if(power%2==0)
	{	
		half_value = calculate_power(base,power/2);
		return half_value * half_value;

	}else{	

		half_value = calculate_power(base,power/2);
		return half_value*half_value*base;
	}
}

 
int main(){

	#ifndef ONLINE_JUDGE
			freopen("input.txt","r",stdin);
			freopen("output.txt","w",stdout);
	#endif
	
	int base,power;
	cin>>base>>power;

	cout<<calculate_power(base,power);
	 
 }


 