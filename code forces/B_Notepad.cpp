#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
string s,s1,ans;
cin >>s;
ans="NO";
unordered_map<string,ll> mp;

  for(int i=0; i<n-1; i++)
        {
            s1=s[i];
            s1+=s[i+1];
            
            if(mp.find(s1)==mp.end()){
                mp[s1]=i;
            }else{
                if(mp[s1]!=i-1){
                    ans="YES";
                    break;
                }
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