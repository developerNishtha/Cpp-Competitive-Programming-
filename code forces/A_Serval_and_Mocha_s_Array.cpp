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
for (int i = 0; i < n; i++)
{
    for (int j = i+1; j < n; j++)
    {
        if(__gcd(a[i],a[j])<=2){
            cout <<"Yes"<<endl;
            return;
        }
    }
    
}
cout <<"No"<<endl;
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