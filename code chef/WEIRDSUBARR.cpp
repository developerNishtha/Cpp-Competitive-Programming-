#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin >> t;
	while (t--){
		long long n;
        cin >>n;
        long long a[n];
        for (long long i = 0; i < n; i++)
        {
            cin >>a[i];
        }
        vector<long long> v;
        //v.push_back(1);
        // for (long long i = 1; i < n-1; i++)
        // {
        //     if(a[i]>a[i+1] && a[i]>a[i-1]){
        //         v.push_back(i+1);
        //     }
        // }
        v.push_back(n);
        long long an=0;
        long long count;
        long long x=v.size();
        for (long long i = 1; i < x; i++)
        {
            count = v[i]-v[i-1]+1;
            an+=((count)*(count+1))/2;
        }
        an-=(x-2);
        cout <<an<<endl;
        
        
        
	}
	return 0;	
}