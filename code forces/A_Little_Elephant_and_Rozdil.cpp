#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll n;
cin >>n;
ll a[n];
ll mn=INT_MAX;
for (ll i = 0; i < n; i++)
{
    cin >>a[i];
    mn=min(mn,a[i]);
}
int cnt=0;
for (int i = 0; i < n; i++)
{
    if(a[i]==mn) cnt++;
}
if(cnt>1) {cout <<"Still Rozdil";return;}
else{
    for (int i = 0; i < n; i++)
    {
        if(a[i]==mn) {
            cout <<i+1<<endl;
            return;
        }
    }   
}
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

