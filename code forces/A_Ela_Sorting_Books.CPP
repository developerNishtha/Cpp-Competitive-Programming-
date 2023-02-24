#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n,k;
cin >>n>>k;
string s;
cin >>s;
map<char,int> mp;
string ans="";
for (int i = 0; i < n; i++)
{
    mp[s[i]]++;
}

for (int i = 1; i <= k; i++)
{
    int l=n/k;
    for (char ch = 'a'; ch <='z' ; ch++)
    {
        if(l<=0){
            ans+=ch;
            break;
        }
        l--;
       if(mp[ch]){
            mp[ch]--;
        }
        else{
            ans+=ch;
            break;
        }
    }
    
}
cout <<ans<<endl;
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


