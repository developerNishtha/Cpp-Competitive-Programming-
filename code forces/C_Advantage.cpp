#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll n;
cin >>n;
ll a[n];
ll b[n];
for (ll i = 0; i < n; i++)
{
    cin >>a[i];
    b[i]=a[i];
}
sort(a,a+n);
for (ll i = 0; i < n; i++)
{
    if(b[i]==a[n-1]){
        b[i]=b[i]-a[n-2];
    }
    else{
        b[i]=b[i]-a[n-1];
    }
}
for (ll i = 0; i < n; i++)
{
    cout <<b[i]<<" ";
}
cout <<endl;



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