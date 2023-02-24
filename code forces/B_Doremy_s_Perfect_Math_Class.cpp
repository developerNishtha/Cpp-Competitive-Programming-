#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll n;
cin >>n;
ll a[n];
ll gcd=0;
for (ll i = 0; i < n; i++)
{
    cin >>a[i];
    gcd=__gcd(gcd,a[i]);
}
sort(a,a+n);
if(gcd==1){
    cout <<a[n-1]<<endl;
}
else{
    cout <<a[n-1]/gcd<<endl;
}


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