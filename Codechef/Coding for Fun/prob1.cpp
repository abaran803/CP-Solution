#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("inp.txt","r",stdin);
	    freopen("out.txt","w",stdout);
	#endif

	ll m,n;
	cin >> m >> n;
	if(n%m == 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}