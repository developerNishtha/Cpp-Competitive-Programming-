#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
string s;
map <string,int> mp;
map<int,vector<string>> mp1;

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < n; j++)
    {
        cin >>s;
        mp[s]++;
        mp1[i].push_back(s);
    }
    
}
for (int i = 0; i < 3; i++)
{
    int ans=0;
    for(auto x:mp1[i]){
        if(mp[x]==1){
            ans+=3;
        }
        if(mp[x]==2){
            ans+=1;
        }
    }
    cout <<ans<<" ";
}
cout <<endl;
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