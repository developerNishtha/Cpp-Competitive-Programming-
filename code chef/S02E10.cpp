#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n,x,k;
cin >>n>>x>>k;
int a[n],b[n];
vector<int> v;

for (int i = 0; i < n; i++)
{
   cin >>a[i];
}
for (int i = 0; i < n; i++)
{
   cin >>b[i];
}
for(int i=0;i<n;i++){
    if(abs(a[i]-b[i])<=k){
        v.push_back(abs(a[i]-b[i]));
    }
}
if(v.size()>=x){
    cout <<"YES"<<endl;
}
else{
    cout <<"NO"<<endl;
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