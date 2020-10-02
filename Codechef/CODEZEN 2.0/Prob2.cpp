#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("inp.txt","r",stdin);
	    freopen("out.txt","w",stdout);
	#endif

	ll tests;
	cin >> tests;
	while(tests--)
	{
		ll n = 5;
		ll arr[n];
		for(ll i=0;i<n;i++)
			cin >> arr[i];
		if(arr[0] == *max_element(arr,arr+n))
			cout << "Champions" << endl;
		else
			cout << -1 << endl;
	}
	return 0;
}