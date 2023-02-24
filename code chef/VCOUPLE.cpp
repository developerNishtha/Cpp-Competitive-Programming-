#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll n;
cin >>n;
ll b[n];
ll g[n];
for (ll i = 0; i < n; i++)
{
    cin >>b[i];
}
for (ll i = 0; i < n; i++)
{
    cin >>g[i];
}
sort(b,b+n);
sort(g,g+n);
ll mx=0;
for (int i = 0; i < n; i++)
{
    mx=max(mx,b[i]+g[n-i-1]);
}
cout <<mx<<endl;

}

int main()
{
	int t;
	cin >> t;
	while (t--){
		nishtha();
	}
	return 0;	
}