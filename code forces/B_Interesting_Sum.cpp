#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll n;
cin >>n;
ll a[n];
for (ll i = 0; i < n; i++)
{
   cin >>a[i];
}
sort(a,a+n);
cout <<(a[n-1]-a[0])+(a[n-2]-a[1])<<endl;

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