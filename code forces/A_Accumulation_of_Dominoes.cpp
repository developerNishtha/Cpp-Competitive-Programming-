#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
    ll n,m;
    cin >>n>>m;
    ll ans=(n*(m-1));
    if(m==1){
        cout <<(n-1)<<endl;
    }
    else{
        cout << ans<<endl;
    }
}

int main()
{
	ll t=1;
	//cin >> t;
	while (t--){
		nishtha();
	}
	return 0;	
}