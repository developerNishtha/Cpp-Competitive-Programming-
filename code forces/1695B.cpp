#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
ll a[n];
for (int i = 0; i < n; i++)
{
    cin >>a[i];
}
int sml=0;
if(n%2 !=0){
    cout<<"Mike"<<endl;
    return;
}
for (int i = 1; i < n; i++)
{
    if(a[sml]>a[i]) sml=i;
}
if(sml%2==0) cout<<"Joe"<<endl;
else cout<<"Mike"<<endl;
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