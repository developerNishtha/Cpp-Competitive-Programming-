#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
int a[n];
map<int,int> mp;
for (int i = 0; i < n; i++)
{
    cin >>a[i];
    mp[a[i]]++;
}
int mx=0;
for(auto x:mp){
    mx=max(mx,x.second);
}
int ans=0;
ans=(n-mx);
n=n-mx;
while(n>0){
    n=n-mx;
    ans++;
    mx*=2;
}
cout<<ans<<endl;
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