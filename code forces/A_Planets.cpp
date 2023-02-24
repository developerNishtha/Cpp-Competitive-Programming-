#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
 int n,p;
    cin>>n>>p;
    int x[101]={0};
    for(int i=0;i<n;i++) {
        int m;cin>>m;
        x[m]++;
    }
    int ans = 0;
    for(int i=1;i<=100;i++){
        if(x[i]>=p) ans += p;
        else ans += x[i];
    }
    cout << ans << endl;
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