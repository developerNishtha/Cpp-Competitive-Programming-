#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
ll a[n];
for (int i = 0; i < n; i++)
{
    cin >>a[i];
}
int cnt=0;
for (int i = 0; i < n-1; i++)
{
    cnt+=a[i+1]-a[i]-1;
}
if(cnt>2) cout<<"NO"<<endl;
else cout<<"YES"<<endl;
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