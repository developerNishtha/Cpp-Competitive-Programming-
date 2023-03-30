#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
   int l,r,a;
    cin>>l>>r>>a;
    if(l/a==r/a) cout<<r/a+r%a<<endl;
    else cout<<max(r/a+r%a,r/a -1+a-1)<<endl;
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