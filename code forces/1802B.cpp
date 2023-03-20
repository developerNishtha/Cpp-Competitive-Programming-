#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
int a[n];
for (int i = 0; i < n; i++)
{
    cin >>a[i];
}
int known=0,unknown=0,ans=0;
for (int i = 0; i < n; i++)
{
    if(a[i]==2){
       known+= unknown;
       if(known>0) {ans=max(ans,(known+2)/2);}
        unknown=0;
    }
    else{
        unknown++;
        if(known==0) ans=max(ans,unknown);
        else ans=max(ans,(known+2)/2+unknown);
    }
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