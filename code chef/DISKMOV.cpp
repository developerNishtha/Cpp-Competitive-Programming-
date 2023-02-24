#include <bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
		long long n,k;
        cin >>n>>k;
        long long a[n];
        long long ans1=0;
        long long ans2=0;
        for (long long i = 0; i < n; i++)
        {
            cin >>a[i];
        }
        sort(a,a+n);
        vector<long long> miss;
        int present=0;
        for (long long i = 0; i < 2*n; i++)
        {
            if(a[present]==i) {present++;}
            else{miss.push_back(i);}
        }

        long long z=0;
        for (long long i = 0; i < k; i++)
        {
            ans1+=max(z,a[n-1]-miss[i]);
        }
        for (long long i = 0; i < k-1; i++)
        {
            ans2+=max(z,2*n-miss[i]);
        }
        cout << max(ans1,ans2)<<endl;       
	}
	return 0;	
}