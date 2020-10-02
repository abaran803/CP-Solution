#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(ll n)
{
	for(ll i=2;i*i<=n;i++)
		if(n%i == 0)
			return false;
	return true;
}

struct Node
{
	ll data;
	Node* next;
};

void InsertBegin(Node **head,ll data)
{
	Node* temp1 = new Node();
	temp1->data = data;
	temp1->next = *head;
	*head = temp1;
}

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
		ll n,q;
		cin >> n >> q;
		ll arr[n];
		map<ll,Node*> mp;
		for(ll i=0;i<n;i++)
			cin >> arr[i];
		for(ll i=0;i<n-1;i++)
		{
			ll a,b;
			cin >> a >> b;
			InsertBegin(&mp[a],b);
			Node* temp = mp[a];
			// while(temp != NULL)
			// {
			// 	cout << temp->data << "~" << endl;
			// 	temp = temp->next;
			// }
		}
		for(ll i=0;i<q;i++)
		{
			ll a,b,c;
			cin >> a;
			if(a == 1)
			{
				cin >> b >> c;
				for(auto it:mp)
				{
					if(it.first == b)
					{
						mp[c] = mp[b];
						mp[b] = 0;
						break;
					}
				}
			}
			else if(a == 2)
			{
				cin >> b;
				Node* temp = mp[a];
				ll count = 0;
				while(temp != NULL)
				{
					if(isPrime(temp->data))
						count++;
					temp = temp->next;
				}
				cout << count << endl;
			}
		}
	}
	return 0;
}