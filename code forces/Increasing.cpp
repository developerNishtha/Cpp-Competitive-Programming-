#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
		int n;
        cin >>n;
        int a[n];
        int count=0;
        map<int,int> mp;
        
        for (int i = 0; i < n; i++)
        {
            cin >>a[i];
            mp[a[i]]++;
        }
        for (auto x:mp){
            if(x.second>1){
                count++;
                break;
            }
            
        }
        if(count==1){
            cout <<"NO"<<endl;
        }
        else{
            cout <<"YES"<<endl;
        }
        
        
        
        
	}
	return 0;	
}