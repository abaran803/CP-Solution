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
		ll n,k;
		cin >> n >> k;
		ll arr[n+1];
		for(ll i=1;i<=n;i++)
			cin >> arr[i];
		ll rem = 0;
		ll i = 1;
		ll day = 0;
		while(1)
		{
			if(i<=n)
				rem += arr[i++];
			else
			{
				day += ceil(rem/k);
				day++;
				break;
			}
			rem -= k;
			day++;
			if(rem < 0)
			{
				break;
			}
		}
		cout << day << endl;
	}
	return 0;
}