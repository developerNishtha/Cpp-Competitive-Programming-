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
        cin >>a[i];
    }
    ll x= *min_element(a,a+n);
   
    if(a[0]==x){
        cout <<"Bob"<<endl;
    }
    else{
        cout <<"Alice"<<endl;
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