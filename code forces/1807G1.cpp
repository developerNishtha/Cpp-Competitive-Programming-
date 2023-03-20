#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll n;
cin >>n;
ll a[n];
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
sort(a,a+n);
ll cnt=1;
if(a[0] != 1) {
    cout<<"NO"<<endl;
    return;
}
for (ll i = 1; i < n; i++)
{
    if(cnt>=a[i]){
        cnt=cnt+a[i];
        continue;
    }
    else {
        cout<<"NO"<<endl;
        return;
    }
}
cout<<"YES"<<endl;
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