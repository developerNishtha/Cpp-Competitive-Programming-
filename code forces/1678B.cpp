#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
int a[n];
int ans=0;
for (int i = 0; i < n; i++)
{
    cin >>a[i];
}
for (int i = n-2; i >= 0; i--)
{
    while(a[i]>=a[i+1] && a[i]>0){
        a[i]/=2;
        ans++;
    }
    if(a[i]==a[i+1]){
        cout<<-1<<endl;
        return;
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