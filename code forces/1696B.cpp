#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n,ans=0;
cin >>n;
vector<int> v(n+1);
for (int i = 1; i<= n; i++)
{
    cin >>v[i];
    if(v[i-1]==0 && v[i]!=0) ans++;
}
ans=min(ans,2);
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