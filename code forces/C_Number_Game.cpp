#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
		int n;
        cin >>n;
         int k=0;
        vector <int> v(n,0);
        for (int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            v[a-1]++;
        }
        int ans=0;
        for (int i=v[0];i>=1;i--)
        {
            int sum=-(i-1);
            bool b=1;
            for (int j=0;j<i;j++)
            {
                sum+=v[j];
                if (sum<(j+1))
                {
                    b=0;
                    break;
                }
            }
            if (b)
            {
                ans=i;
                break;
            }
        }
        cout << ans << endl;
    }
        
	
	return 0;	
}