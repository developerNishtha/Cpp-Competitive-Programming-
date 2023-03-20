#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
vector<int> a(n);
map<int,int> mp;
int cnt=0;
for (int i = 0; i < n; i++)
{
    cin >>a[i];
    mp[a[i]]++;
}
for(auto x:mp){
    if(x.second==1) {
        cout<<-1<<endl;
        return;
    }
}
vector<int> v(n);
for (int i = 0; i < n; i++)
{
    v[i]=i+1;
}
for (int i = n-1; i >=0; i--)
{
    if(a[i]==a[i-1]) swap(v[i],v[i-1]);
    else continue;
}
for (int i = 0; i < n; i++)
{
   cout<<v[i]<<" ";
}
cout<<endl;
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