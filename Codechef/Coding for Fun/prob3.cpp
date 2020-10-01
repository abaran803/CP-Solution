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
	ll k = ceil(float(n)/2);
	if(k%2 == 0)
		cout << "Ravi";
	else 
		cout << "Jhon";
	return 0;
}