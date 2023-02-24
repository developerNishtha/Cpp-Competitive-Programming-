#include <bits/stdc++.h>
using namespace std;



int main()
{
	int t;
	cin >> t;
	while (t--){
        int n;
        int count=0;
        cin >>n;
        int a[n];
        map<int,int> mp;
        for (int i= 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        
		for(auto x:mp){
            if(x.second %2 !=0){
				cout <<x.first << endl;
			}
        }
        
        
	}
	return 0;	
}