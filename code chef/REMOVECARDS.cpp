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
            cin >> a[i];
            mp[a[i]]++;
        }
        int maximum=INT_MIN;
        for(auto x:mp){
            count+=x.second;
            maximum=max(maximum,x.second);
        }
        
        cout << count-maximum <<endl;
        
	}
	return 0;	
}