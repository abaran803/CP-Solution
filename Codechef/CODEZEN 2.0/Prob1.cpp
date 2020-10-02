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
		ll n;
		cin >> n;
		ll arr[n];
		for(ll i=0;i<n;i++)
			cin >> arr[i];
		map<ll,ll> pos,neg;
		ll countNeg = 0, countPos = 0;
		for(ll i=0;i<n;i++)
		{
			if(arr[i]<0)
			{
				if(neg[arr[i]] != 1)
				{
					neg[arr[i]] = 1;
					countNeg += arr[i];
				}
			}
			else
			{
				if(pos[arr[i]] != 1)
				{
					pos[arr[i]] = 1;
					countPos += arr[i];
				}
			}
		}
		cout << countPos << " " << countNeg << endl;
	}
	return 0;
}