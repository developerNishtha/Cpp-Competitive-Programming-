#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll n,m;
cin >>n>>m;
ll a[m];
for (ll i = 0; i < m; i++)
{
    cin >>a[i];
}
ll cnt=a[0]-1;
for (ll i = 1; i < m; i++)
{
    if(a[i]>=a[i-1]){
        cnt+=(a[i]-a[i-1]);
    }
    else{
        cnt+=(n+a[i]-a[i-1]);
    }
}
cout <<cnt<<endl;
}

int main()
{
	int t=1;
	//cin >> t;
	while (t--){
		nishtha();
	}
	return 0;	
}