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
	cin >> str;
	string PalStr = "";
	string tempStr = "";
	ll k;
	ll n = str.length();
	for(ll i=0;i<n;i++)
	{
		k = 0;
		while(str[i] >= '0' && str[i] <= '9')
			k = (k*10)+(str[i++]-'0');
		if(str[i] == '+')
		{
			i++;
			while(str[i] != '-')
			{
				tempStr += str[i++];
				if(i == n)
				{
					tempStr = "";
					break;
				}
			}
			for(ll i=0;i<k;i++)
				PalStr += tempStr;
			tempStr = "";
		}
		else
			PalStr += str[i];
	}
	bool isPal = true;
	for(ll i=0,j=PalStr.length()-1;i<j;i++,j--)
		if(PalStr[i] != PalStr[j])
		{
			isPal = false;
			break;
		}
	if(isPal)
		cout << "Return";
	else
		cout << "Continue";
	return 0;
}