#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n,k;
cin >>n>>k;
int l[n],r[n];
int a=0,b=0;
for (int i = 0; i < n; i++)
{
    cin >>l[i]>>r[i];
    if(l[i]==k) a++;
    if(r[i]==k) b++;
}
if(a>=1 && b>=1) cout <<"YES"<<endl;
else cout <<"NO"<<endl;
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