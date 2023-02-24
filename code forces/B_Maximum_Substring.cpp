#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
    int n;
    cin >>n;
    string s;
    cin >>s;
    ll c1=0;
    ll c0=0;
    ll x=0,y=0,z=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='0'){
            c0++;
            x=max(x,c1);
            c1=0;
            z++;
        }
        else{
            c1++;
            y=max(y,c0);
            c0=0;
        }
        
    }
    x=max(x,c1);
    y=max(y,c0);

    
    cout << max((n-z)*z,max(x*x,y*y))<<endl;
    
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