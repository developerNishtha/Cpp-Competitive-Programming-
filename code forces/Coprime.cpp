#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
		int n;
        cin >>n;
        int mx=-1;
        vector<int> v(1001,0);
        for (int i = 1; i <=n; i++)
        {
            int a;
            cin >>a;
            v[a]=i;
        }
        for (int i = 1; i < 1001; i++)
        {
            for (int j = 1; j < 1001; j++)
            {
                if(v[i] && v[j] && int(__gcd(i,j))==1){
                    mx=max(mx,v[i]+v[j]);
                }
            }
            
        }
        cout <<mx<<endl;
        
        
	}
	return 0;	
}