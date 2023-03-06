#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n,k;
cin >>n>>k;
string s;
cin >>s;
ll sol=0;
map<char,int> mp,map_cnt1,map_cnt2;
for (int i = 0; i < n; i++)
{
    mp[s[i]]++;
}
for(auto a: s){
    if(islower(a)) map_cnt1[a]++;
    else{
        map_cnt2[a]++;
    }
}
for(auto a:map_cnt1){
    char ch=toupper(a.first);
    while(map_cnt2.find(ch) != map_cnt2.end() && map_cnt2[ch]>0 && map_cnt1[a.first]>0){
        map_cnt1[a.first]=map_cnt1[a.first]-1;
        sol=sol+1;
        map_cnt2[ch]=map_cnt2[ch]-1;
        
    }
    while(map_cnt1[a.first]>=2 && k>0){
        sol=sol+1;
        k=k-1;
        map_cnt1[a.first]=map_cnt1[a.first]-2;
    }
}
for(auto a:map_cnt2){
    while(map_cnt2[a.first]>=2 && k>0){
        sol=sol+1;
        k=k-1;
        map_cnt2[a.first]=map_cnt2[a.first]-2;
    }
}
cout<<sol<<"\n";
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