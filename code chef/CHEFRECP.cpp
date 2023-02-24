#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
     int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    int i=0;
    map<int,int> mp;
    while(i<n) {
        if(mp[a[i]]>0) {
            cout << "NO" << endl;
            return;
        }
        int temp = a[i];
        mp[temp]++;
        while(i+1<n && a[i]==a[i+1]) {
            mp[a[i]]++;
            i++;
        }
        i++;
    }
    map<int,int> freq;
    for(auto x: mp) {
        if(freq[x.second]==1) {
            cout << "NO" << endl;
            return;
        }
        freq[x.second]=1;
    }
    cout << "YES" << endl; 
    
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