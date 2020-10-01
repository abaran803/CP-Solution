#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("inp.txt","r",stdin);
	    freopen("out.txt","w",stdout);
	#endif

	ll n;
	cin >> n;
	ll arr[n+1];
	for(ll i=1;i<=n;i++)
		cin >> arr[i];
	ll m;
	cin >> m;
	for(ll i=1;i<=m;i++)
	{
		ll a,b;
		cin >> a >> b;
		if(b>arr[a])
		{
			if(a>1)
				arr[a-1] += arr[a];
		}
		else
		{
			if(a>1)
				arr[a-1] += b-1;
			if(a<n)
				arr[a+1] += arr[a]-b;
		}
		arr[a] = 0;
	}
	for(ll i=1;i<=n;i++)
		cout << arr[i] << endl;
	return 0;
}