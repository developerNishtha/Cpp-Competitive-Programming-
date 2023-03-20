#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n,x;
cin >>n>>x;
int a[n];
vector<pair<int,int>> v(n);
for (int i = 0; i < n; i++)
{
    cin >>a[i];
    v[i].first=a[i]-x;
    if(a[i]-x<0) v[i].first=0;
    v[i].second=a[i]+x;
}
int ans=0,l=v[0].first,r=v[0].second;
for (int i = 1; i < n; i++)
{
    if(v[i].first>r || v[i].second<l){
        ans++;
        l=v[i].first;
        r=v[i].second;
    }
        l=max(l,v[i].first);
        r=min(r,v[i].second);   
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