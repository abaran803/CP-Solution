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
		ll n,x,p,k;
		cin >> n >> x >> p >> k;
		ll arr[n+1];
		for(ll i=1;i<=n;i++)
			cin >> arr[i];
		sort(arr+1,arr+n+1);
		if(x == arr[p])
			cout << 0 << endl;
		else if(n == 1)
			cout << 1 << endl;
		else
		{
			ll j=0;
		 	bool isFound = false;
			if(k<=p && arr[p]<x)
			{
				if(find(arr+1,arr+n+1,x) == arr+n+1)
					j += 2;
				isFound = true;
				j += ((lower_bound(arr+1,arr+n+1,x)-arr)-p);
			}
			else if(k>=p && arr[p]>x)
			{
				isFound = true;
				j += (p-(lower_bound(arr+1,arr+n+1,x)-arr));
			}
			if(isFound)
				cout << j << endl;
			else
				cout << -1 << endl;
		}
	}
	return 0;
}