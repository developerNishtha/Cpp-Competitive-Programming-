#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll n;
cin >>n;
ll a[n];
ll oddCount=0;
for (ll i = 0; i < n; i++)
{
   cin >>a[i];
   if(a[i]%2 != 0){
    oddCount++;
   }

}
if(oddCount==0){
    cout <<"NO"<<endl;
}
else if(oddCount%2!=0){
    cout <<"NO"<<endl;
}
else{
    cout <<"YES"<<endl;
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