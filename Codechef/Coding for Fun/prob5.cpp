#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("inp.txt","r",stdin);
	    freopen("out.txt","w",stdout);
	#endif

	string str;
	ll s = 0;
	cin >> str;
	for(ll i=0;i<str.length();i++)
		s += (27-(ll)(str[i]-65));
	cout << s;
	return 0;
}