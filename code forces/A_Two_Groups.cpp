#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
    ll n;
    cin >>n;
    ll a[n];
    ll sum1=0;
    ll sum2=0;

    for (ll i = 0; i < n; i++)
    {
       cin >>a[i];
       if(a[i]>0){
        sum1+=a[i];
       }
       else{
        sum2+=a[i];
       }
    }
    cout <<abs(abs(sum1)-abs(sum2))<<endl;
    
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