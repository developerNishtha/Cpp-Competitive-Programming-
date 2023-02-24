#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
		long long  n,q;
        cin >>n>>q;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<pair<long long,long long>> que(q);
        vector<long long> ans(q);
        long long sum=0;
        for (long long i = 0; i < q; i++)
        {
            cin >> que[i].first;
            que[i].second=i;            
        }
        sort(que.begin(),que.end());
        long long pos=0;
        for (long long i = 0; i < q; i++)
        {
            while (pos < n && v[pos]<=que[i].first )
            {
               
                sum+=v[pos];
                pos++;
            }
            ans[que[i].second]=sum;
            
        }
        for(auto x:ans){
            cout << x <<" ";
        }
        cout << endl;
	}
	return 0;	
}