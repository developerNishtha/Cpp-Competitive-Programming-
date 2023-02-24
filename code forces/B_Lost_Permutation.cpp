#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n,s;
cin >>n>>s;
unordered_map <ll, bool> mp;
int mx=0;
int a[n];
for (int i = 0; i < n; i++)
{
    cin >>a[i];
    mp[a[i]]=true;
    mx=max(mx,a[i]);
}
int x=1;
while(s>0){
    while(mp[x]==true){
        x++;
    }
    s=s-x;
    mx=max(mx,x);
    mp[x]=true;
    x++;
}
if(s==0 && mp.size()==mx){
    cout <<"YES"<<endl;
}
else{
    cout<< "NO" <<endl;
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