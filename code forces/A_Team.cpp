#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
int a,b,c;
int ans=0;

for (int i = 0; i < n; i++)
{
    int cnt=0;
    cin >>a>>b>>c;
    if(a==1) cnt++;
    if(b==1) cnt++;
    if(c==1) cnt++;
    if(cnt>=2) ans++;
}
cout <<ans<<endl;
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