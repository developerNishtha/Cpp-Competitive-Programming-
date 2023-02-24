#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
		string s;
        cin >>s;
        int ans=0;
        map <char,int> mp;
        for (int i = 0; i < s.length(); i++)
        {
           mp[s[i]]++;
        }
        for(auto x: mp){

            if(x.second%2==0){
                ans+=(x.second)/2;
            }
            else{
                ans+=((x.second)/2)+1;
            }
        }
        cout <<ans<<endl;
        
	}
	return 0;	
}