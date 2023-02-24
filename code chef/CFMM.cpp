#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n=0;
    cin>>n;
    string s[n];
    for (int i = 0; i < n; i++) {
        cin>>s[i];
    }
    unordered_map<char,int> mp;
    for (int i = 0; i < n; i++) {
        int k=s[i].length();
        for (int j = 0; j < k; j++) {
            mp[s[i].at(j)]++;
        }
    }int m=0;int c=0;int o=0;int d=0;int e=0;int h=0; int f=0;
    for (auto i : mp) {
        
        if(i.first=='c')
        c=i.second;
        if(i.first=='o')
        o=i.second;
        if(i.first=='d')
        d=i.second;
        if(i.first=='e')
        e=i.second;
        if(i.first=='h')
        h=i.second;
        if(i.first=='f')
        f=i.second;
        // cout<<i.first<<" "<<i.second;
    }
    // cout<<c<<o<<d<<e<<h<<f;
    m=min(min(min(min(min(c/2,e/2),o),d),h),f);
    cout<<m<<endl;
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