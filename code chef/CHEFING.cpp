#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
string str[n];
map<char,int> mp;
for (int i = 0; i < n; i++)
{
    cin >>str[i];

    set <int> s;
    for(auto a: str[i]){
        s.insert(a);
    }
    for(auto b : s){
        mp[b]++;
    }
}
 int ans = 0;
    for(auto a: mp)
    {
        if(a.second == n)
        {
            ans++;
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