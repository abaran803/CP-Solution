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
		if(n == 1)
			cout << 1 << endl;
		else
		{
			double d;
			d = log2(n);
			if(d-int(d) == 0)
				cout << -1 << endl;
			else
			{
				cout << 2 << " " << 3 << " " << 1 << " ";
				for(ll i=4;i<=n;i++)
				{
					if(log2(i)-int(log2(i)) == 0)
						cout << i + 1 << " ";
					else if(log2(i-1)-int(log2(i-1)) == 0)
						cout << i-1 << " ";
					else
						cout << i << " ";
				}
				cout << endl;
			}
		}
	}
	return 0;
}