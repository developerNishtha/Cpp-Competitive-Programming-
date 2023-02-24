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
        int maximum=INT_MIN; 
        for(auto x:mp){
            maximum=max(maximum,x.second);
        }
        cout << n-maximum << endl;
	}
	return 0;	
}