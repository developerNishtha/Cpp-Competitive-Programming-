#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
int a[2*n];
map<int ,int> mp;
for (int i = 0; i < 2*n; i++)
{
    cin >>a[i];
    mp[a[i]]++;
}
int flag=0;
for (auto x: mp)
{
    if(x.second>2){
       flag=1;
       break;
    }

}
if(flag){
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