#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isVowel(char c)
{
	if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
		return true;
	else
		return false;
}

int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("inp.txt","r",stdin);
	    freopen("out.txt","w",stdout);
	#endif

	string str;
	cin >> str;
	bool isGood = false;
	ll _3Vow = 0;
	map<char,ll> mp;
	for(ll i=0;i<str.length();i++)
	{
		if(isVowel(str[i]))
		{
			_3Vow++;
			if(_3Vow == 3)
				isGood = true;
		}
		else
		{
			_3Vow = 0;
			mp[str[i]] = 1;
		}
	}
	if(mp.size() >= 5 && isGood)
		cout << "GOOD";
	else
		cout << -1;
	return 0;
}