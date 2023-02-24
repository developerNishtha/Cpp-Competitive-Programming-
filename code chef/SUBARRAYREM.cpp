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
        int x=0,y=0;
        for (int i = 0; i < n; i++)
        {
            cin >>a[i];
            if(a[i]==0){
                x++;
            }
            else{
                y++;
            }
        }
        //int ans=0;
        int ans=min(x,y);
        y=max(0,y-x);
        ans+=(y/3);
        cout <<ans<<endl;

        
	}
	return 0;	
}