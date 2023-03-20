#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
int a[n];
int cntM=0,cntB=0;
for (int i = 0; i < n; i++)
{
    cin >>a[i];
    if(a[i]%2 == 0) cntM+=a[i];
    else cntB+=a[i];
}
if(cntM>cntB) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
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