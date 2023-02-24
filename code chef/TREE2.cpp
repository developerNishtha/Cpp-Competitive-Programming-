#include <bits/stdc++.h>
using namespace std;

int main() {

	long long t;
	cin>>t;
	while(t--){
	   long long n;
       cin >>n;
       long long a[n];
       long long x=0;
       map<long long,long long> mp;
       for (long long i = 0; i < n; i++)
       {
        cin >>a[i];
        if(a[i]==0){
            continue;
        }
        mp[a[i]]++;       
        }  
        cout <<mp.size()<<endl;
	}
	return 0;
}