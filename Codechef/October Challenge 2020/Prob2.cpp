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
		ll n,k,x,y;
		cin >> n >> k >> x >> y;
		if(x == y)
			cout << "YES" << endl;
		else
		{
			bool isCorrect = false;
			ll m = x;
			do{
				m = ((m+k)%n);
				if(m == y)
				{
					isCorrect = true;
					break;
				}
			}while(m != x);
			if(isCorrect)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
	return 0;
}