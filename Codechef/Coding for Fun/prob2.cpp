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
	ll VL = 0,HL = 0;
	char c;
	for(ll i=0;i<n;i++)
	{
		cin >> c;
		if(c == 'V')
			VL++;
		else
			HL++;
	}
	if(VL>HL)
		cout << "Virat\n";
	else if(HL>VL)
		cout << "Harshit\n";
	else
		cout << "Friendship\n";
	return 0;
}